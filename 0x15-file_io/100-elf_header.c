#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_err_and_exit(const char *error)
{
	fprintf(stderr, "%s\n", error);
	exit(98);
}

void display_elf_header(const char *filename)
{
	int i, fd;
	ssize_t read_count;
	Elf64_Ehdr header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_err_and_exit("Error: Unable to open file");

	read_count = read(fd, &header, sizeof(header));
	if (read_count != sizeof(header))
		print_err_and_exit("Error: Unable to read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_err_and_exit("Error: Not a valid ELF file");
	}

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			(header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown"));

	printf("Version: %d\n", header.e_ident[EI_VERSION]);

	printf("OS/ABI: %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			(header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Other"));

	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", header.e_type == ET_NONE ? "None" :
			(header.e_type == ET_REL ? "Relocatable" :
			 (header.e_type == ET_EXEC ? "Executable" :
			  (header.e_type == ET_DYN ? "Shared object" :
			   (header.e_type == ET_CORE ? "Core" : "Unknown")))));

	printf("Entry point address: 0x%lx\n", header.e_entry);

	close(fd);
}

int main(int argc, char *argv[])
{
	const char *filename;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	filename = argv[1];
	display_elf_header(filename);

	return 0;
}


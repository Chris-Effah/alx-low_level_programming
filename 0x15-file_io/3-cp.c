#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 1024
/**
 * print_err_and_exit - a function that prints error when an error is
 * encountered and exits
 * @error: error message
 * @file: name of file
 * @exit_status: exit status
 * Return: Void
 */
void print_err_and_exit(const char *error, const char *file, int exit_status)
{
	fprintf(stderr, "Error: %s\n", error, file);
	exit(exit_status);
}
/**
 * create_buffer - a function that allocates 1024 bytes for the file being
 * copied
 * @file: name of file
 * Return: a pointer to the buffer allocated
 */

char *create_buffer(const char *file)
{
	char *buffer = malloc(sizeof(char) * BUFF_SIZE);

	if (buffer == NULL)
	{
		print_err_and_exit("Can't write to file", file, 99);
	}

	return (buffer);
}
/**
 * cp_file - copies text from one file to another
 * @file_from: source file
 * @file_to: destination file.
 * Return: Void
 */

void cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char *buffer;
	ssize_t by_rd, by_wr;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_err_and_exit("Can't read from file", file_from, 98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_err_and_exit("Can't write to file", file_to, 99);
	}

	buffer = create_buffer(file_from);

	while ((by_rd = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		by_wr = write(fd_to, buffer, by_rd);

		if (by_wr != by_rd)
		{
			print_err_and_exit("Can't write to file", file_to, 99);
		}
	}

	if (by_rd == -1)
	{
		print_err_and_exit("Can't read from the file", file_from, 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_err_and_exit("Can't close file descriptor", "", 100);
	}

	free(buffer);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 if a success
 */
int main(int argc, char *argv[])
{

	const char *file_from, *file_to;

	if (argc != 3)
	{
		print_err_and_exit("Usage: cp file_from file_to", "", 97);
	}

	file_from = argv[1];
	file_to = argv[2];
	cp_file(file_from, file_to);

	return (0);
}


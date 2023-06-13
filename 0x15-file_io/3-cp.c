#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFF_SIZE 1024

/**
  * print_err_and_exit - a function that prints error when an error is
  * encountered and exits
  * @error: error message
  * Return: Void
  */
void print_err_and_exit(const char *error)
{
	dprintf(STDERR_FILENO, "%s\n", error);
	exit(EXIT_FAILURE);
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
	char buffer[BUFF_SIZE];

	int by_rd, by_wr;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_err_and_exit("Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IROTH);
	if (fd_to == -1)
		print_err_and_exit("Error: Can't write to file");

	while ((by_rd = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		by_wr = write(fd_to, buffer, by_rd);

		if (by_wr != by_rd)
			print_err_and_exit("Error: Can't write to file");
	}

	if (by_rd == -1)
		print_err_and_exit("Error: Can't read from the file");

	if (close(fd_from) == -1 || close(fd_to) == -1)
		print_err_and_exit("Error: Can't close file descriptor");

	printf("File copied succesfullly.\n");
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
		print_err_and_exit("Usage: cp file_from file_to");
	}
	file_from = argv[1];
	file_to = argv[2];
	cp_file(file_from, file_to);

	return (0);
}


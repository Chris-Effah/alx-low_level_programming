#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * print_err_and_exit - a function that prints an error message when an error
  * message is encountered
  * @error: error message
  * @file: name of file
  * Return: Void
  */
void print_err_and_exit(const char *error, const char *file)
{
	fprintf(stderr, "Error: %s %s\n", error, file);
	exit(98);
}

/**
  * create_buff - creater buffer to contain data
  * @file: name of file
  * Return: buffer.
  */
char *create_buff(const char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		print_err_and_exit("Can't write to file", file);
	}
	return (buffer);
}

/**
  * cp_file - a function that copies a file from one destination to another
  * @file_from: source file
  * @file_to: destination file
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
		print_err_and_exit("Can't read from file", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_err_and_exit("Can't write to file", file_to);
	}

		buffer = create_buff(file_from);

		while ((by_rd = read(fd_from, buffer, BUFF_SIZE)) > 0)
		{
			by_wr = write(fd_to, buffer, by_rd);

			if (by_wr != by_rd)
			{
				print_err_and_exit("Can't write to file", file_to);
			}
		}
		if (by_rd == -1)
			print_err_and_exit("Can't read from the file", file_from);

		if (close(fd_from) == -1 || close(fd_to) == -1)
			print_err_and_exit("Can't close file descriptor", "");

		free(buffer);
}

/**
  * main - entry point
  * @argc: number of arguments
  * @argv: arguments passed
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		print_err_and_exit("Usage: cp file_from file_to", "");
	}

	file_from = argv[1];
	file_to = argv[2];

	cp_file(file_from, file_to);

	return (0);

}

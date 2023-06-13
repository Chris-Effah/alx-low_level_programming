#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads text from a file and prints it out to
 * the standard output.
 * @filename: name of the file containing tthe text to be printed to the stan
 * dard output.
 * @letters: number of letters to be read and printed.
 * Return: On success the number of letters actually read and printed .
 * Returns 0 if the file cannot be opene or read of if the write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t read_file, write_file, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	read_file = read(fd, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	free(buffer);
	close(fd);

	return (write_file);
}

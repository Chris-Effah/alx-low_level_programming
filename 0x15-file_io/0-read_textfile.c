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
	ssize_t read_file, write_file;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_file = fread(buffer, sizeof(char), letters, file);
	if (read_file <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	write_file = fwrite(buffer, sizeof(char), read_file, stdout);
	if (write_file < read_file)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (write_file);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: text to append at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t len = 0;
	size_t by_wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	len = strlen(text_content);
	by_wr = fwrite(text_content, sizeof(char), len, file);
	fclose(file);

	if (by_wr != len)
		return (-1);

	return (1);

}

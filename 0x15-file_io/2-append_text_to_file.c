#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * append_text_to_file - a function that appends text at the end of a file
  * @filename: name of the file to append text to
  * @text_content: text to append at the end of the file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t cont_len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	cont_len = strlen(text_content);


	if (fwrite(text_content, sizeof(char), cont_len, file) != cont_len)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);

}

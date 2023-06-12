#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * create_file - a function that creates a file
  * @filename: name of the file to be created
  * @text_content: conent of the file
  * Return: 1 on success and -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len_con, write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len_con = strlen(text_content);
		write_count = write(fd, text_content, len_con);

		if (write_count != len_con)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

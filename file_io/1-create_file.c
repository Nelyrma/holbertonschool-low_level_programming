#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: pointer to the address of the filename
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int write_c;
	int fd;
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_context != NULL)
	{
		for (i = 0; text_content[i] != '\0', i++)
			;
		write_c = write(fd, text_content, i);

		if (write_c == -1)
		{
			close(fd);
			return (-1);
		}

		close(fd);
		return (1);
	}



}

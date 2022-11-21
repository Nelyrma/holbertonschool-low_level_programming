#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: the pointer to address of the file
 * @letters: the number of letters it should read and print
 * Return: the number of letters to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_c, write_c;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_c = read(fd, buf, letters);
	if (read_c == -1)
	{
		close(fd);
		return (0);
	}

	write_c = write(fd, buf, letters);
	if (write_c == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (write_c);
}

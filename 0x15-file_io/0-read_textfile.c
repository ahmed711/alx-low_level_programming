#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: file
 * @letters: letters
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, err, rd;
	char *buf;

	fd = err = rd = 0;
	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	if (rd < 0)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	err = write(STDOUT_FILENO, buf, rd);
	if (err <= 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (rd);

}

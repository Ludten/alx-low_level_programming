#include "main.h"

/**
 * read_textfile - read a text file and print
 * it to the POSIX standard output.
 *
 * @filename: namke of text file
 * @letters: number of letters read and print
 * Return: number of bytes printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, m;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /*read*/
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	m = read(fd, buff, letters);
	if (m == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	n = write(STDOUT_FILENO, buff, m);/*write*/
	if (n == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	free(buff);
	return (n);
}

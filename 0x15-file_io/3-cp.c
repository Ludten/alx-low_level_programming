#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

void read_textfile(const char *filename0, const char *filename1);
void create_file(const char *filename, char *buff, size_t bt);
/**
 * read_textfile - read a text file and print
 * it to the POSIX standard output.
 *
 * @filename0: name of text file
 * @filename1: name of text file
 * Return: number of bytes printed or 0
 */
void read_textfile(const char *filename0, const char *filename1)
{
	int fd;
	ssize_t m;
	char buffer[1024];

	if (filename0 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename0);
		exit(98);
	}
	fd = open(filename0, O_RDONLY); /*read*/
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename0);
		exit(98);
	}
	m = read(fd, buffer, 1024);
	if (m == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename0);
		exit(98);
	}
	close(fd);
	create_file(filename1, buffer, m);
}

/**
 * create_file - Create a file
 *
 * @filename: file name
 * @buff: buffer
 * @bt: no. of bytes
 */
void create_file(const char *filename, char *buff, size_t bt)
{
	int fd, n;

	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
	n = write(fd, buff, bt);/*write*/
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		close(fd);
		exit(99);
	}
	close(fd);
}

/**
 * main - copy files
 *
 * @ac: argument counter
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_textfile(av[1], av[2]);
	return (0);
}

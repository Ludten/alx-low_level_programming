#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

/**
 * main - copy files
 *
 * @ac: argument counter
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int r, a, b, fd[2];
	char buf[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd[0] = open(av[1], O_RDONLY);
	if (fd[0] < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd[1] = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd[0], buf, BUFSIZ)) > 0)
	{
		if (fd[1] < 0 || write(fd[1], buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd[0]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	a = close(fd[0]);
	b = close(fd[1]);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[0]);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[1]);
		exit(100);
	}
	return (0);
}

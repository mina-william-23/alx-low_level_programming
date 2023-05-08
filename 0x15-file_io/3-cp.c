#include "main.h"

/**
 * main - main fun
 * @args: args count
 * @argv: array of strings
 * Return: (0) success
 */
int main(int args, char **argv)
{
	char buffer[1024];
	int fd1, fd2, flags, written, read_c;

	if (args != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1 || (read_c = read(fd1, buffer, 1024)) == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", argv[1]);
		exit(98);
	}
	flags = O_WRONLY | O_TRUNC | O_CREAT;
	fd2 = open(argv[2], flags, 0664);
	if (fd2 == -1 || (written = write(fd2, buffer, read_c)) == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", argv[2]);
		exit(99);
	}
	while ((read_c = read(fd1, buffer, 1024)) != -1)
	{
		written = write(fd2, buffer, read_c);
		if (written == -1 || written == 0)
			break;
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd1);
		return (100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd2);
		return (100);
	}
	return (0);
}

#include "main.h"

/**
 * close_file - use system call close
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int close_flag;

	close_flag = close(fd);
	if (close_flag == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", "Error: Can't close fd", fd);
		exit(100);
	}
}
/**
 * perform_copy - copy from fd1 to fd2
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * @s1: file name 1
 * @s2: file name 2
 */
void perform_copy(int fd1, int fd2, char *s1, char *s2)
{
	char buffer[1024];
	int read_c, written;

	do {
		read_c = read(fd1, buffer, 1024);
		if (read_c == -1)
		{
			close_file(fd1);
			close_file(fd2);
			dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", s1);
			exit(98);
		}
		written = write(fd2, buffer, read_c);
		if (written == -1)
		{
			close_file(fd1);
			close_file(fd2);
			dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", s2);
			exit(99);
		}
	} while ((read_c != 0));

}
/**
 * main - main fun
 * @args: args count
 * @argv: array of strings
 * Return: (0) success
 */
int main(int args, char **argv)
{
	int fd1, fd2, flags;

	if (args != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", argv[1]);
		exit(98);
	}
	flags = O_WRONLY | O_TRUNC | O_CREAT;
	fd2 = open(argv[2], flags, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to", argv[2]);
		exit(99);
	}

	perform_copy(fd1, fd2, argv[1], argv[2]);
	close_file(fd1);
	close_file(fd2);
	return (0);
}

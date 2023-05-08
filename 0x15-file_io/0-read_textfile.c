#include "main.h"
/**
 * read_textfile - read filename and print (letters count)
 * @filename: path of file
 * @letters: number of chars to print from it
 * Return: number printed
 * if (file doesn't exist - fail to open return 0)
 * if actual printed is different than actual read return 0
 * if actual printed is different than letters return actual printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed = 0, c_read = 0;
	int file_descriptor = -1;
	char *str;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	str = malloc(letters);
	if (!str)
		return (0);

	c_read = read(file_descriptor, str, letters);
	printed = write(STDOUT_FILENO, str, c_read);

	close(file_descriptor);
	free(str);

	return (printed == c_read ? printed : 0);
}

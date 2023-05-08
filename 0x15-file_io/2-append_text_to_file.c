#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length of string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && *s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * append_text_to_file - add text to end of file if exists
 * @filename: file name to append to it
 * @text_content: content to append
 * Return: (1) success (-1) failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, flags, content_len, written, close_flag;

	if (filename == NULL)
		return (-1);

	flags = O_APPEND | O_WRONLY;
	file_d = open(filename, flags);

	if (file_d ==  -1)
		return (-1);

	content_len = _strlen(text_content);
	if (text_content == NULL)
		written = 0;
	else
		written = write(file_d, text_content, content_len);

	close_flag = close(file_d);
	if (close_flag == -1 || written == -1 || written != content_len)
		return (-1);

	return (1);
}

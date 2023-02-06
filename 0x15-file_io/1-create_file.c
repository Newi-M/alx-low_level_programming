#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openReturn, writeReturn;
	int len;

	if (filename == NULL)
		return (-1);

	openReturn = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (openReturn < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(openReturn);
		return (1);
	}

	len = _strlen(text_content);
	writeReturn = write(openReturn, text_content, len);
	if (writeReturn < 0 || writeReturn != len)
		return (-1);
	return (1);
}

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}

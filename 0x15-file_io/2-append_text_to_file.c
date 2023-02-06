#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, openReturn, writeReturn;

	if (filename == NULL)
		return (-1);

	openReturn = open(filename, O_RDWR | O_APPEND);
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
 * _strlen - returns the length of string
 * @s: string
 *
 * Return: length
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

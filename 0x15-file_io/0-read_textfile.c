#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openReturn, readReturn, writeReturn;
	char *storage;

	storage = malloc(sizeof(char) * letters);

	if (storage == NULL || filename == NULL)
		return (0);

	openReturn = open(filename, O_RDONLY);
	if (openReturn < 0)
	{
		free(storage);
		return (0);
	}

	readReturn = read(openReturn, storage, letters);
	if (readReturn < 0)
	{
		close(openReturn);
		free(storage);
		return (0);
	}

	writeReturn = write(STDOUT_FILENO, storage, readReturn);
	if (writeReturn < 0 || writeReturn != readReturn)
	{
		close(openReturn);
		free(storage);
		return (0);
	}

	free(storage);
	close(openReturn);
	return (readReturn);
}

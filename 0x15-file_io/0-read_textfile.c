#include "holberton.h"
/**
 * read_textfile - Read file
 * @filename: Filename
 * @letters: Letter
 * Return: Size of string
 *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size, count;
	int state;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	state = open(filename, O_RDONLY, 0600);
	if (state == -1)
	{
		return (0);
	}
	size = read(state, buffer, letters);
	close(state);
	count = write(STDOUT_FILENO, buffer, size);
	if (count == -1)
		return (0);
	free(buffer);
	return (size);
}

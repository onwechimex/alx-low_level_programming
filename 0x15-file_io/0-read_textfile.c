#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: Pointer to the name of the file.
 * @letters: number of letters the
 *           function should read and print.
 *
 * Return: if the function fails 0
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, q, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	q = read(p, buffer, letters);
	w = write(STDOUT_FILENO, buffer, q);

	if (p == -1 || q == -1 || w == -1 || w != q)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(p);

	return (w);
}

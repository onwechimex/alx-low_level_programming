#include "main.h"

/**
 * create_file - To create a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         if not - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int k, w, le = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (le = 0; text_content[le];)
			le++;
	}

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(k, text_content, le);

	if (k == -1 || w == -1)
		return (-1);

	close(k);

	return (1);
}

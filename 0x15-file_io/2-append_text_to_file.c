#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         if not - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, w, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	w = write(j, text_content, ln);

	if (j == -1 || w == -1)
		return (-1);

	close(j);

	return (1);
}

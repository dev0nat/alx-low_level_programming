#include "main.h"

/**
 * create_file - Function creates a file.
 *
 * @filename: A pointer to filename.
 * @text_content: content.
 *
 * Return: returns 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fn, len;

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (!text_content)
		return (1);

	if (fn == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	write(fn, text_content, len);
	close(fn);
	return (1);
}

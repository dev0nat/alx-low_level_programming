#include "main.h"

/**
 * read_textfile- Function reads a text file and prints it to standard output.
 *
 * @filename: Pointer to name of the file
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 *        or 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;
	char *buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);
	return (w);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fud;
	ssize_t x;
	ssize_t t;

	fud = open(filename, O_RDONLY);
	if (fud == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fud, buff, letters);
	x = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fud);
	return (x);


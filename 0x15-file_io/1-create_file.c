#include "main.h"
#include <string.h>
/**
 * create_file - create file pointer
 * @filename: pointer file
 * @text_content: number od letters
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fud, wat;

	if (filename == NULL)
		return (-1);
	fud = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fud == -1)
		return (-1);
	if (text_content != NULL)
	{
		wat = write(fud, text_content, strlen(text_content));
		if (wat == -1)
			return (-1);
	}
	close(fud);
	return (1);
}

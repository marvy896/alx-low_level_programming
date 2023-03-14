#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	st = malloc(sizeof(c) * size);
	if (st == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		st[a] = c;
	}
	return (st);
}

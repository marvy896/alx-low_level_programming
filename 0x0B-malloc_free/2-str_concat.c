#include "main.h"
#include <stdlib.h>
/**
 * * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the string to add to @s1
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *sti;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	sti = malloc(sizeof(char) * (a + b + 1));
	if (sti == NULL)
	{
		free(sti);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		sti[c] = s1[c];
	limit = b;
	for (b = 0; b <= limit; c++, b++)
		sti[c] = s2[b];
	return (sti);
}

#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[i] == c)
		{
			return (s + j);
		}
		else if (s[j] == '\0')
		{
			s = '\0';
		}
	}
	return (s);
}

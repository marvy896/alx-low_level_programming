#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area.
 * @s: pointer that have the adress of the area
 * @b: constant byte that fills the area
 * @n: bytes to be filled
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (n > 0)
	{
		s[x] = b;
		x++;
		n--;
	}
	return (s);
}

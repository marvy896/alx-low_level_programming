#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: size of the space to malloc.
 * Return: pointer with the address of the array created.
 */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (q == NULL)
	{
		exit(98);
	}
	return (q);
}

#include "main.h"
/**
 * print_alphabet_x10.c - print alphabets in different
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int q, p;

	for (q = 0; q <= 9; q++)
	{
		for (p = 27; p <= 122; p++)
		{
			_putchar(p);
		}
		_putchar('\n')
	}
}

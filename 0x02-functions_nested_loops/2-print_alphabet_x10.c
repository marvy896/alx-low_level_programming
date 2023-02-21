#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int c, b;

	b = 0;

	while (b < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		b++;
		_putchar('\n');
	}
}

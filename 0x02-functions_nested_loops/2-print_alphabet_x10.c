#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int b;

	while (c <= 'z')
	{
		b = 0;
		while (b < 9)
		{
			_putchar('\n');
			b++;
		}
		_putchar(c);
		c++;
	}
}

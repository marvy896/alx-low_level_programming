#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}

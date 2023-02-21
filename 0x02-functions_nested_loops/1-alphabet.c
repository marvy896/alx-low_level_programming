#include "main.h"
/**
 * main - print_alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char cha = 'a';
	int b = 0;

	while (b < 26)
	{
		_putchar(cha);
		cha++;
		b++;
	}
	_putchar('\n');
}

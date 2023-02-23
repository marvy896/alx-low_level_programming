#include "main.h"
/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 * Return: void
 */
void print_number(int n)
{
	int a1;

	if (n < 0)
	{
		a1 = -n;
		_putchar('-');
	}
	else
	{
		a1 = n;
	}
	if (a1 / 10)
	{
		print_number(a1 / 10);
	}
	_putchar((a1 % 10) + '0');
}

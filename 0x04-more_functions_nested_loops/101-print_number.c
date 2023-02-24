#include "main.h"
/**
 * print_number - prints # using _putchar function
 * @n: the integer to print
 * Return: void
 */
void print_numbers(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar(45);
		a = -n;
	}
	if (a / 10)
		print_numbers(a / 10);
	_putchar((a % 10) + '0');
}

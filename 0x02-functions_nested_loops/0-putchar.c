#include "main.h"
/**
 * main - print the word _putchar
 * more headers goes there
 *
 *
 * Return: Always(0)
 */

int main(void)
{
	char *b = "_putchar";

	while (*b)
	{
		_putchar(*b);
		b++;
	}
	_putchar('\n');
	return (0);
}

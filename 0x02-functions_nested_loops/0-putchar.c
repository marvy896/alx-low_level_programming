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
	char *ab = "_putchar";

	while (*ab)
	{
		_putchar(*ab);
		ab++;
	}
	_putchar('\n');
	return (0);
}

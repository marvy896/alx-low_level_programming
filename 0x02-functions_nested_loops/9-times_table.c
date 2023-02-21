#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 *
 * Return: times table
 *
 * add extra space past single digit
 */
void times_table(void)
{
	int fone, done, d;

	for (fone = 0; fone <= 9; fone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (done = 1; done <= 9; done++)
		{
			d = (fone * done);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (done < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

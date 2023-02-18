#include <stdio.h>
/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
	{
		putchar(j + '0', k + '0');
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}

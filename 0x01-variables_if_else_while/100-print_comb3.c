#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int k;

	for (j = 0; j <= 8; j++)
	{
		for (k = 1; k <= 9; k++)
	{
		if (j != k && j < k)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (j + k != 17)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}

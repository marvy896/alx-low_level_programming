#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int k;
	int l;

	for (j = 0; j <= 7; j++)
	{
		for (k = 1; k <= 8; k++)
		{
			for (l = 2; l <= 9; l++)
			{
				if (j != k || k != l || l != j)
				{
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	long i, numb = 612852475143;

	for (i  = 2; i <= numb; i++)
	{
		if (numb % i == 0)
		{
			numb = numb / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}

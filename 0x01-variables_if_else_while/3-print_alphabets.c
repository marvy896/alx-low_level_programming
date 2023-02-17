#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int j = 0;

	/* your code goes there */
	while (j < 26)
	{
		putchar(ch);
		ch++;
		j++;
	}
	ch = 'A';
	j = 0;
	while (j < 26)
	{
		putchar(ch);
		ch++;
		j++;
	}
	putchar('\n');
	return (0);
}

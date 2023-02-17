#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	int j = 0;
	/* your code goes there */
	while (j < 10)
	{
		putchar(ch);
		ch++;
		j++;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char cha = 'a';
	int b = 0;
	/* your code goes there */
	while (b < 26)
	{
		putchar(cha);
		cha++;
		b++;
	}
		putchar('\n');
		return (0);
}

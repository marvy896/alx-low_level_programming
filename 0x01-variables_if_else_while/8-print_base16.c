#include <stdio.h>
/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);
	putchar('\n');
	return (0);
}

#include <stdlib>
#include <stdio.h>
/**
 * main - Multiply 2 numbers and print result
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 on success, 1 if not given two arguments
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}

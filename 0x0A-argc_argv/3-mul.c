#include <stdlib>
#include <stdio.h>
/**
 * main - Multiply 2 numbers and print result
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 * Return: 0 on success, 1 if not given two arguments
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

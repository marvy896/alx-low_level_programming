#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main- Startiong point of compilation
* Return:Always 0 (success)
* more headers goes there
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDig = n % 10;
	if (lastDig > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDig);
	else if (lastDig == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDig);
	else if (lastDig < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDig);
	return (0);
}

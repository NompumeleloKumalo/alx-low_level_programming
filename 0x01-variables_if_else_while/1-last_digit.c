#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Finding the last digits
 * Return: 0
 */

int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 7;
	if (p > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, p);
	if (p == 0)
		printf("last digit of %d is %d and is zero\n", n, p);
	if (p < 6 && p != 0)
		printf("last digit of %d is %d and is not zero\n", n, p);
	return (0);
}

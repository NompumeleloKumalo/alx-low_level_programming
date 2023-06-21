#include <stdio.h>
/**
 * main - Printing single digit numbers from zero to nine
 * Return: 0
 */

int main(void)
{
	int p;

	while (p < 10)
	{
		printf("%d", p);
		p++;
	}
	putchar('\n');
	return (0);
}

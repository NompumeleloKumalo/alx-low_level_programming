#include <stdio.h>
/**
 * main - Prints number from zero to nine and letters from a to f
 * Return: 0
 */

int main(void)
{
	char p;

	int n;

	p = 'a';
	n = '0';

	while
		(p <= 'f')
		{
			putchar(p);
			p++;
		}

	while
		(n < 10)
		{
			putchar(n + '0');
			n++;
		}
	putchar ('\n');
	return (0);
}

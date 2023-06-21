#include <stdio.h>
/**
 * main - Printing alphabets in lowercase without e and q
 * Return: 0
 */

int main(void)

{
	char n;

	n = 'a';

	while

		(n <= 'z')

		{
			if ((n != 'q' && n != 'e') && n <= 'z')
				putchar (n);
			n++;
		}
	putchar ('\n');
	return (0);
}

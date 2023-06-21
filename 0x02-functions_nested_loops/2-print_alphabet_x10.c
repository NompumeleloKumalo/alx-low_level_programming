#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphats in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char p;
	int i;

	i = 0;
	while (i < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar ('\n');
		i++;
	}
}

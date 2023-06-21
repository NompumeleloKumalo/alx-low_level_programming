#include <stdio.h>
/**
 * main - Prints all possible combinations of three digits
 * Return: 0
 */

int main(void)
{
	int n, p, k;

	for (n = 48; n < 58; n++)
	{
		for (p = 49; p < 58; p++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > p && p > n)
				{
					putchar(n);
					putchar(p);
					putchar(k);
					if (n != 55 || p != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

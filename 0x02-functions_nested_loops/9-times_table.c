#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, p, k;

	for (n = 0; n < 10; n++)
	{
		for (p = 0; p < 10; p++)
		{
			k = p * n;
			if (p == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && p != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}


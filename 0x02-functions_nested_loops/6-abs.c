#include "main.h"
/**
 * _abs - Prinnt the absolute value of an integer
 * @c: the integer to e printed 
 * Return: Absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1; 
		return (abs_val);
	}
	return (c);
}

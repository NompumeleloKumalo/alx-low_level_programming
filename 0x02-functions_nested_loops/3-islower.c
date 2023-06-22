#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @p: The character to be checked
 * Return: 1 for lowercase character and 0 for anything else
 */

int _islower(int p)
{
	if (p >= 97 && p <= 122)
	{
		return (1);
	}
	return (0);
}

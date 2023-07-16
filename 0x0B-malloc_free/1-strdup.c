#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copies to a new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int i, n = 0;

	if (str == NULL)
		
		return (NULL);
	
	i = 0;

	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i = 1));

		if (s == NULL)

			return (NULL);

		for (n = 0; str[n]; n++)

			s[n] = str[n];

		return (s);			
}

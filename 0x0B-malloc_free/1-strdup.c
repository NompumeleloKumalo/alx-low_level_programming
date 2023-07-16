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
	char *aaa;
	int i, n = 0;

	if (str == NULL)
		
		return (NULL);
	
	i = 0;

	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i = 1);

		if (aaa == NULL)

			return (NULL);

		for (n = 0; str[n]; n++)

			aaa[n] = str[n];

			return (aaa);			
}

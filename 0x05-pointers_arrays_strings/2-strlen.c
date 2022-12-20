#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string printed
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

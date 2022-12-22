#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - change lowercase to uppercase
 * @string: pointer to string
 * Return: uppercase
 */

char *string_toupper(char *string)
{
	int length;

	length = 0;

	while (string[length] != '\0')
	{
		if (string[length] >= 97 && string[length] <= 122)
		{
			string[length] = string[length] - 32;
		}
		length++;
	}
	return (string);


#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatinating two strings
 * @src: string to be appended
 * @dest: first string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);


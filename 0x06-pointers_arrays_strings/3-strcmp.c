#include "main.h"
#include <stdio.h>


/**
 * _strcmp - compararing two strings.
 * @s1: First string
 * @s2: Second string
 * Return: string greater than other return less than 0,
 * otherwise return greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);


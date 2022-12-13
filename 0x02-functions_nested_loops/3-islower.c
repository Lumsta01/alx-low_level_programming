#include "main.h"

/**
 * _islower - check lowercase character
 * return 1 if c is lower
 * return 0 otherwise
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _islower - check lowercase, returns 1 if yes, returns 0 if no
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

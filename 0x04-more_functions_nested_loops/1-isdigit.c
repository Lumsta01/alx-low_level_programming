#include "main.h"

/**
 * _isdigit - check digits, 0 through 9
 * @c: digit to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

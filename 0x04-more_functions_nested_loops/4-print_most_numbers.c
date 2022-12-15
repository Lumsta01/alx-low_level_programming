#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9, except 2 & 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

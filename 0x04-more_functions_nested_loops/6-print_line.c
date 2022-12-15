#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times _ is printed
 * Return: 0
 */

void print_line(int n)
{
	int i = 1;

	while (i <=  n)
	{
		_putchar(_);
		i++;
	}
	_putchar('\n');
}

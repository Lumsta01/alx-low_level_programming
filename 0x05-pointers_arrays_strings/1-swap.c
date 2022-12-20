#include "main.h"
#include <stdio.h>

/**
 * swap_int - swapping two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

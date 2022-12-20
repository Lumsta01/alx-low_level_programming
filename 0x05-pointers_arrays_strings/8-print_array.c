#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: parameter (pointer)
 * @n: number of elements to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

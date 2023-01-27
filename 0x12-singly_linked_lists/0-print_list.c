#include "lists.h"

/**
 *print_list - function to print list
 *@h: pointer type
 *Return: 0 or nil
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		printf("\n");
	}
	return (counter);
}

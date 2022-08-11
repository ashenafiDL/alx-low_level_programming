#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}

	return (count);
}

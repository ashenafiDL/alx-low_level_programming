#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp;

	temp = h;
	i = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}

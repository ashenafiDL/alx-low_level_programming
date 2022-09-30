#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the first node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}

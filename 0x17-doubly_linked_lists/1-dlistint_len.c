#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the first node
 *
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	const dlistint_t *temp;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}

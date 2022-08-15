#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to first element
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}

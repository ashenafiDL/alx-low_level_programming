#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: the address of the first node
 * @idx: the index of the list where the new node should be added
 * @n: the new data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp != NULL)
			temp = temp->next;
	}

	if (temp != NULL)
	{
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		if (new->next != NULL)
			new->next->prev = new;
	}

	return (new);
}

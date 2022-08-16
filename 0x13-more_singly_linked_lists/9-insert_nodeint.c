#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	current = *head;
	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}

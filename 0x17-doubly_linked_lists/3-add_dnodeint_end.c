#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: address of the first node
 * @n: the new data to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->next = NULL;
		new->prev = temp;
	}

	return (new);
}

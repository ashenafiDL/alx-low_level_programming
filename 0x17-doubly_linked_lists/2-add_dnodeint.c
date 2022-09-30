#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: the address of the first node
 * @n: the new data to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

	return (new);
}

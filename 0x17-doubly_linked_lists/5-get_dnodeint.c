#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: the first node
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n;

	temp = head;
	n = 0;
	while (temp != NULL && n != index)
	{
		temp = temp->next;
		n++;
	}

	return (temp);
}

#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}

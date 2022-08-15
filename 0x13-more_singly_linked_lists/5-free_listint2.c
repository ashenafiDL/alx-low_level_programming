#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *nxt;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
}

#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *nxt;

	temp = head;
	while (temp)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
}

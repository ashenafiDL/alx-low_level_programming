#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first element
 */
void free_list(list_t *head)
{
	list_t *temp, *nxt;

	temp = head;
	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp->str);
		free(temp);
		temp = nxt;
	}
}

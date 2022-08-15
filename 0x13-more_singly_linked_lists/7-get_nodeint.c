#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: the index of the node, starting at 0
 * Return: th node at index or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	i = 0;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}

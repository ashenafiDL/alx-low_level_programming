#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index of a linked list
 * @head: address of the pointer to the first node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
		return (-1);

	temp = *head;
	current = *head;
	if (index == 0)
	{
		if (temp->next)
			temp = temp->next;
		else
			temp = NULL;

		free(current);
		return (1);
	}

	i = 0;
	while (temp && i < (index - 1))
	{
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

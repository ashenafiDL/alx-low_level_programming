#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: the address of the pointer to the first node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);

	return (num);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: the sum of all the data in a linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

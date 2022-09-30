#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data of a dlistint_t linked list
 *
 * @head: the first node
 *
 * Return: the sum of all the data of a dlistint_t linked list
 * 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

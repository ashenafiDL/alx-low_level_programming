#include "lists.h"
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list
 * @head: pointer to the first element
 * @str: string data
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = _strlen(str);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return  (new);
}

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: lenght of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


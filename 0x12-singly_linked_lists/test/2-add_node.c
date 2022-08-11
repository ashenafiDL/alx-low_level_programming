#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the first element
 * @str: string data
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = _strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - finds th elenght of a string
 * @str: string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

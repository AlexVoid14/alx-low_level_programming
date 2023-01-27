#include "lists.h"
#include <stdlib>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of a list_t list
 * @str: the string to ne added to list_t list
 * Return: If function fails NULL
 *         Otherwise - the address of the new element
 */
lsit_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*hea);
	(*head) = new;

	return (*head);
}

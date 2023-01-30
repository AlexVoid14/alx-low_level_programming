#include "lists.h"

/**
 * listint_len - return the number of elements of in a linked list
 * @h: linked list type listint_tto transverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

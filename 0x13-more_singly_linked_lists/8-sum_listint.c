#include <stdio.h>
#include "lists.h"

/** sum_listint - calculates the sum of all data (n) of a linked list
 * @head: pointer to linked list
 * Return: sum of all the data (n),
 * or 0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

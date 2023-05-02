#include "lists.h"
/**
 * listint_len -returns the number of elements in a linked list.
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

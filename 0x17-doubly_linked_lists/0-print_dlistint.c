#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: header of our list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num_node = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num_node++;
	}
	return (num_node);
}

#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j = 0;
	const listint_t *tmp;

	while (head)
	{
		printf("%d\n", head->n);
		j++;
		tmp = head;
		head = head->next;
		if (tmp <= head)
		{
			exit(98);
		}
	}
	return (j);
}


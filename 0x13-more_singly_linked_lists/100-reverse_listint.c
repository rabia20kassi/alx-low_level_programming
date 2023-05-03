#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *last;

	current = *head;
	prev = NULL;
	while (current)
	{
		last = current->next;
		current->next = prev;
		prev = current;
		current = last;
	}

	*head = prev;

	return (*head);
}


#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

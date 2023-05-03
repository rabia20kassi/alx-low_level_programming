#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of list
 * @head: A pointer to the address of the head of the list.
 * @index: The index of the list that we should delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *p;

	if (!*head)
		 return (-1);

	if (index == 0)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
	}
	p = temp->next;
	temp->next = p->next;
	free(p);
	return (1);
}

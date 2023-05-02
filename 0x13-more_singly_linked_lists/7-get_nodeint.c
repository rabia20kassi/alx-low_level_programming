#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list
 * @index: The index of the node
 * Return: the nth node of a list, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
	}
	return (temp);
}

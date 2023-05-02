#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer to the head of the listint_t list.
 * Return: the head node’s data (n) , 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (!*head)
		return (0);
	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (data);
}

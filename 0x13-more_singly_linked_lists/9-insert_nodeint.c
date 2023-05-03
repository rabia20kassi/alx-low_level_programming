#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A pointer to the address of the head of the list.
 * @idx: The index of the list that the new node should be added
 * @n: The integer for the new node to contain.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (!*head)
		return (NULL);
	for (i = 0; i < idx - 1 && temp; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = new_node->next = NULL;
	new_node->n = n;
	new_node->next = *head;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}

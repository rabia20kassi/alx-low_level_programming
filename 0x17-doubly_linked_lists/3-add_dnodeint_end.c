#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head:pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
		}
		return (new_node);
}

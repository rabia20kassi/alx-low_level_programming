#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: The integer for the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = *head;
	*head = newN;
	return (*head);
}

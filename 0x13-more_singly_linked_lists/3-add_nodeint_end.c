#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: The integer for the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN, *temp;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
		*head = newN;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newN;
	}
	return (newN);
}

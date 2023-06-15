#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the head of the dlistint_t list.
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			free(temp);
			temp = temp->next;
		}
	}
}

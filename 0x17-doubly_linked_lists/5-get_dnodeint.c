#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (!temp)
		return (NULL);
	while (temp  && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

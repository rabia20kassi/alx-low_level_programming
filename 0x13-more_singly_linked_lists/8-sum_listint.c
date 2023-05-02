#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: Pointer to the head of the listint_t list.
 * Return: the sum of all the data (n), 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int data, sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}

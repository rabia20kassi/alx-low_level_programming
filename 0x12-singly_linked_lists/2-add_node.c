#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer to the head of the list_t list
 * @str: String added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *b;
	int len = 0;
	char *copy;

	copy = strdup(str);
	b = (list_t *) malloc(sizeof(list_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->str = copy;
	if (b->str == NULL)
	{
		free(b);
		return (NULL);
	}
	while (str[len])
		len++;
	b->next = *head;
	b->len = len;
	*head = b;
	return (b);
}

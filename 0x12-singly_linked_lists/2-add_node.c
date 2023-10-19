#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nextel;
	size_t num;

	nextel = (list_t *)malloc(sizeof(list_t));
	if (nextel == NULL)
		return (NULL);

	nextel->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	nextel->len = num;
	nextel->next = *head;
	*head = nextel;

	return (*head);
}

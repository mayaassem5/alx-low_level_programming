#include "lists.h"
#include <stdlib.h>

/**
 ** delete_dnodeint_at_index - deletes a node at a specific index
 ** @head: double pointer to the linked list
 ** @index: index at which to delete node
 **
 ** Return: 1 on success, -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevv;
	dlistint_t *h;
	dlistint_t *nextt;
	unsigned int in;

	in = 0;

	next = NULL;
	prev = NULL;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	h = *head;

	while (h != NULL)
	{
		if (index == in)
			free(h);
		else
		{
			in++;
			h = h->next;
			if (index == in)
			{
				prevv = h->prev;
				nextt = h->next;
				free(h);
				prevv->next = nextt;
				nextt->prev = prevv;
			}
			return (1);
		}
	}
	return (-1);

}

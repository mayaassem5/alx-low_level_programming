#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *m = h;
	int count;

	while (m != NULL)
	{
		printf("%d", m->n);
		count++;
		m = m->next;
	}

	return (count);
}

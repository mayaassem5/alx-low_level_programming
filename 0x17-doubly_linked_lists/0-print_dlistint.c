#include "lists.h"
<<<<<<< HEAD

/**
 ** print_dlistint - prints all the elements of a
 ** dlistint_t list
 **
 ** @h: head of the list
 ** Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	while (h->next != NULL)
	{
		printf(h->n);
		h = h->next;
	}
=======
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
>>>>>>> b1a6241da3f04ed7330b01db655e93e20697d617
}

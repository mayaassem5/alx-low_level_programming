#include "lists.h"

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
}

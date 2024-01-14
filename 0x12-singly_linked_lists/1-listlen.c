#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	while(h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

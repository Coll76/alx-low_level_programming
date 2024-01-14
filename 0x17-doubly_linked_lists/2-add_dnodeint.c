#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of list
 * @head: pointer to linked list
 * @n: integer value to assign to ne node
 * Return: Ne node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (ne_node == NULL)
	{
	printf("Memory allocation failed");
	exit(98);
	}
	ne_node->n = n;
	ne_node->next = *head;
	ne_node->prev = NULL;
	if (*head != NULL)
	{
	(*head)->prev = ne_node;
	}
	*head = ne_node;
	return (*head);
}

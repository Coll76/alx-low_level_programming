#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: pointer to the head
 * Return: A pointer to the first element of
 * the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *new_tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;

	while (*head != NULL)
	{
		new_tmp = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		if (new_tmp == NULL)
			return (*head);
		*head = new_tmp;
	}
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	return (NULL);
}

#include "lists.h"
/**
 * free_list - releases the memory allocated for a list
 * @head: a pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

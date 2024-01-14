#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//define a struct for the singly linked list
typedef struct node
{
	char *str;
	struct node *next;
}list_t;
//Adda ne node to the linked list
list_t *add_ne(list_t **head, char *str)
{
	list_t *ne_node = (list_t *)malloc(sizeof(list_t));
	if (ne_node == NULL || str == NULL)
	{
	printf("Memory allocation failed");
	exit(98);
	}
	ne_node->str = strdup(str);
	//next node after ne_node ill take the value ithin the *head
	ne_node->next = *head;
	//updates head pointer to ne_node and ne_node becomes the head
	*head = ne_node;

	return (ne_node);
}
list_t print_list(list_t *head)
{
	while(head != NULL)
	{
		printf("%s-> ", head->str);
		head = head->next;
	}
	printf("NULL\n");
}
//Let's free the linked list
void free_list(list_t *head)
{
	list_t *current_node;
	while((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
//Let's test the functionality
int main(void)
{
	list_t *head = NULL;
	add_ne(&head, "Intuition");
	add_ne(&head, "comes");
	add_ne(&head, "in");
	print_list(head);

	free_list(head);

	return (0);
}

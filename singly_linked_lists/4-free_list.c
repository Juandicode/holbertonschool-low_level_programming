#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer
 * @param head The head of the list to be freed.
 */
void free_list(list_t *head)

{
	list_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current->str);
	free(current);
	}
}

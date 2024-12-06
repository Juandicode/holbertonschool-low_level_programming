#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libera una lista enlazada de tipo list_t
 * @head: Apuntador al primer nodo de la lista
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;       /* Guardar el nodo actual */
		head = head->next; /* Moverse al siguiente nodo */
		free(temp->str);   /* Liberar la memoria del string */
		free(temp);        /* Liberar la memoria del nodo */
	}
}

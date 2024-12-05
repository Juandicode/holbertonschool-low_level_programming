#include "lists.h"

/**
 * list_len - retorna el numero de leementos de una linked list de tipo list_t
 * @h: Puntero al principio de la linked list
 *
 * Return: El numeo d elementos d la lista
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

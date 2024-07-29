
#include "lists.h"

/**
 * list_len - devuelve el número de elementos en una lista enlazada
 * @h: puntero a la cabeza de la lista
 *
 * Return: el número de nodos
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

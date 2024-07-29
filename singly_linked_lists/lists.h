#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_t - singly linked list node
 * @str: string stored in the node
 * @len: length of the string
 * @next: pointer to the next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - devuelve el número de elementos en una lista enlazada
 * @h: puntero a la cabeza de la lista
 *
 * Return: el número de nodos
 */
size_t list_len(const list_t *h);

#endif /* LISTS_H */

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
 * list_len - give back the number of liked lists
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);
/**
 * *add_node - adds a note
 * @h: pointer
 * Return (0)
 */


list_t *add_node_end(list_t **head, const char *str);
/**
 * add_node_end - adds a node at the end of the list
 * @h: pointer to the end of the list
 * Return (0)
 */

void free_list(list_t *head);
#endif /* LISTS_H */

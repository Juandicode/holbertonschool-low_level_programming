#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}
dlistint_t;

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
#endif /* LISTS_H */

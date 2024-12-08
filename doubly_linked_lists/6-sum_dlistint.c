#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: the head of the list
 *
 * Return: the sum of all the data (n) of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	dlistint_t *current;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

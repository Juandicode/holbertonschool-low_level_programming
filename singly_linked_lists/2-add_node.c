#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicated_str;
	unsigned int largostr = 0;

	if (str == NULL)
		return (NULL);

	/* pa duplicar el string */
	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
		return (NULL);

	/* Calcular el largo del string */
	while (str[largostr])
	largostr++;

	/* reserva memoria para el neuvo nodito*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicated_str);
		return (NULL);
	}

	/* inicializa el nuevo nodo */
 	new_node->str = duplicated_str;
	new_node->len = largostr;
	new_node->next = *head;

	/* actualiza el puntero head al  nuevo nodo */
	*head = new_node;

	return (new_node);
}

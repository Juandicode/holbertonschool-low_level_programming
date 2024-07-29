#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - agrega un nuevo nodo al principio de una lista enlazada
 * @head: puntero a la cabeza de la lista
 * @str: cadena a duplicar y agregar al nodo
 *
 * Return: la dirección del nuevo elemento, o NULL si falló
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	int len = 0;

	/* Duplica la cadena */
	str_dup = strdup(str);
	if (str_dup == NULL)
	return (NULL);

	/* Crea un nuevo nodo */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	free(str_dup);
	return (NULL);
	}

	/* Inicializa el nuevo nodo */
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	/* Actualiza la cabeza de la lista */
	*head = new_node;

	return (new_node);
}

#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - añade un nuevo nodo al final de una lista de tipo list_t.
 * @head: puntero a la cbza de la lista
 * @str: string para ser duplicado ya ñadido al nuevo nodo.
 *
 * Return: retorna la direccion del nuevo nodo, o null si falla
 */
list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	list_t *last_node;
	int largostr = 0;

	/* reserva memoria para el nuevo nodo */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* Duplico el string y lo asigno al nuevo nodo   */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
		return (NULL);
	}
	/* Calcula el largo del string  */
	while (str[largostr] != '\0')
	{
	largostr++;
	}
	new_node->len = largostr;
	/* pongo el proximo puntero del nuvo nodo en nullxq sera el ultimo nod */
	new_node->next = NULL;
	/* si la lista esta vacia , hace el primer nodo la cabeza  */
	if (*head == NULL)
	{
	*head = new_node;
		return (new_node);
	}
	/* recorro la lista para encontrar el ultimo nodo */
	last_node = *head;
	while (last_node->next != NULL)
	last_node = last_node->next;
	/* link del nuvo nodo al final de la lalista */
	last_node->next = new_node;
	return (new_node);
}

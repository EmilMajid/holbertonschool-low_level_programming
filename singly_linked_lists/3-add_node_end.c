#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node_end - Adds a new node to the end of a list.
*@head: Head of the list
*@str: Value to be added
*
*Return: The address of new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}

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
	list_t *new_node,
	       *temp;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);

}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*list_len - Calculates number of elements in the given list.
*@h: Given list
*Return: The number of nodes.
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

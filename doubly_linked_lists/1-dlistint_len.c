i#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Calculates the length of the list.
 * @h: Head of the list
 *
 * Return: Size of the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (c);
	while (h)
	{
		h = (*h).next;
		c++;
	}
	return (c);
}

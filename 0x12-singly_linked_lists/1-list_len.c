#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Determines the count of elements in a linked list.
 * @h: Pointer to the list_t list.
 *
 * Return: Count of elements in 'h'.
 */
size_t list_len(const list_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		elementCount++;
		h = h->next;
	}

	return (elementCount);
}

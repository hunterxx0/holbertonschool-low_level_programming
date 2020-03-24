#include "lists.h"
/**
 * free_listint2? (- free list)?
 *
 * @h: input head
 * Return:
 */
void free_listint2(listint_t **h)
{
	listint_t *t;

	if (!*h || !h)
		return;
	while (*h)
	{
		t = (*h)->next;
		free(*h);
		*h = t;
	}
	h = NULL;
}

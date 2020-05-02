#include "lists.h"
/**
 * free_dlistint? (- free list)?
 *
 * @h: input head
 * Return:
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *t;

	if (!h)
		return;
	while (h)
	{
		t = h;
		h = h->next;
		free(t);
	}
}

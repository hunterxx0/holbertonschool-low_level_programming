#include "lists.h"
/**
 * free_listint? (- free list)?
 *
 * @h: input head
 * Return:
 */
void free_listint(listint_t *h)
{
	listint_t *t;

	if (!h)
		return;
	while (h)
	{
		t = h;
		h = h->next;
		free(t);
	}
}

#include "lists.h"
/**
 * free_list? (- free list)?
 *
 * @h: input format
 * Return:
 */
void free_list(list_t *h)
{
	list_t *t;

	if (!h)
		return;
	while (h)
	{
		t = h;
		h = h->next;
		free(t->str);
		free(t);
	}
}

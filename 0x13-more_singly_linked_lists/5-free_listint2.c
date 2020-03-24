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

	if (!*h)
	{
		free(h);
		return;
	}
	while (*h)
	{
		t = *h;
		*h = (*h)->next;
		free(t);
	}
	*h = NULL;
}

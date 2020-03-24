#include "lists.h"
/**
 * free_listint2? (- free list)?
 *
 * @h: input head
 * Return:
 */
void free_listint2(listint_t **h)
{
	listint_t *t, *z;

	if (!*h)
		return;
	t = *h;
	while (h && t)
	{
		z = t;
		t = t->next;
		free(z);
	}
	*h = NULL;
}

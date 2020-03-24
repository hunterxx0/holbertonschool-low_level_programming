#include "lists.h"
/**
 * get_nodeint_at_index? (- i'th node)?
 *
 * @h: input head
 * @i: index
 * Return: z
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int i)
{
	size_t n = 0;
	listint_t *z, *t = h;

	while (t)
	{
		n++;
		t = t->next;
	}
	if (i >= n)
		return (NULL);
	n = 0;
	while (n < i)
	{
		h = h->next;
		n++;
	}
	z = h;
	z->n = h->n;
	z->next = h->next;
	return (z);
}

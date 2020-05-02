#include "lists.h"
/**
 * get_nodeint_at_index? (- i'th node)?
 *
 * @h: input head
 * @i: index
 * Return: z
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int i)
{
	size_t n = 0;
	dlistint_t *t = h;

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
	return (h);
}

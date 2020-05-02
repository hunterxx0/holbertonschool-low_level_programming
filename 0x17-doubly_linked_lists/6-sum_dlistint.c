#include "lists.h"
/**
 * sum_dlistint? (- sum list)?
 *
 * @h: input head
 * Return: n
 */
int sum_dlistint(dlistint_t *h)
{
	int n = 0;

	if (!h)
		return (0);
	while (h)
	{
		n += h->n;
		h = h->next;
	}
	return (n);
}

#include "lists.h"
/**
 * sum_listint? (- rm the head node)?
 *
 * @h: input head
 * Return: n
 */
int sum_listint(listint_t *h)
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

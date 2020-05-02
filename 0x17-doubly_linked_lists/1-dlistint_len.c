#include "lists.h"
/**
 * dlistint_len? (- len doubly list)?
 *
 * @h: input head
 * Return: n
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

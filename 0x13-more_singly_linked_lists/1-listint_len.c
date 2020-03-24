#include "lists.h"
/**
 * listint_len? (- list len)?
 *
 * @h: input head
 * Return: x
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

#include "lists.h"
/**
 * print_dlistint? (- print doubly list)?
 *
 * @h: input head
 * Return: n
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}

#include "lists.h"
/**
 * print_listint? (- print list)?
 *
 * @h: input head
 * Return: n
 */
size_t print_listint(const listint_t *h)
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

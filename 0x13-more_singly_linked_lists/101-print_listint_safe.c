#include "lists.h"
/**
 * print_listint_safe? (- print safe list)?
 *
 * @h: input head
 * Return: x
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL || h->next != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		x++;
		h = h->next;
	}
	return (x);
}

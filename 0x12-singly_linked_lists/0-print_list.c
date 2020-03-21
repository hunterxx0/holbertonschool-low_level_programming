#include "lists.h"
/**
 * print_list? (- print list)?
 *
 * @h: input format
 * Return: n
 */
size_t print_list(const list_t *h)
{

	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}

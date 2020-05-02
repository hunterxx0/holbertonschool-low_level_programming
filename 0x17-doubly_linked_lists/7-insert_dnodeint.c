#include "lists.h"
/**
 * insert_dnodeint_at_index? (- add i'th node)?
 *
 * @h: input head
 * @i: index
 * @n: input node
 * Return: z
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int i, int n)
{
	size_t x = 0, j = 0;
	dlistint_t *z, *t = *h;

	z = malloc(sizeof(dlistint_t));
	if (z == NULL || (*h == NULL && i != 0))
		return (NULL);
	z->n = n;
	z->next = NULL;
	z->prev = NULL;
	if (i == 0)
	{
		if (*h)
			(*h)->prev = z;
		z->next = *h;
		*h = z;
		return (z);
	}
	while (t)
	{
		j++;
		t = t->next;
	}
	if (i > j)
		return (NULL);
	t = *h;
	while (x < i - 1)
	{
		t = t->next;
		x++;
	}
	z->next = t->next;
	t->next = z;
	z->prev = t;
	return (z);
}

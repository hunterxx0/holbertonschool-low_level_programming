#include "lists.h"
/**
 * delete_dnodeint_at_index? (- del i'th node)?
 *
 * @h: input head
 * @i: index
 * Return: 1 succes or -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int i)
{
	size_t x, j = 0;
	dlistint_t *z, *k, *t = *h;

	if (*h == NULL)
		return (-1);
	while (t)
	{
		j++;
		t = t->next;
	}
	if (i >= j)
		return (-1);
	x = 0;
	t = *h;
	if (i == 0)
	{
		if (t->next)
		{
			t = t->next;
			t->prev = NULL;
		}
		free(*h);
		*h = t;
		return (1);
	}
	while (x < i - 1)
	{
		t = t->next;
		x++;
	}
	z = t;
	t = t->next;
	z->next = t->next;
	free(t);
	if (z->next)
	{
		k = z->next;
		k->prev = z;
	}
	return (1);
}

#include "lists.h"
/**
 * delete_nodeint_at_index? (- add i'th node)?
 *
 * @h: input head
 * @i: index
 * Return: 1 succes or -1 fail
 */
int delete_nodeint_at_index(listint_t **h, unsigned int i)
{
	size_t x, j = 0;
	listint_t *z, *t = *h;

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
		t = t->next;
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
	return (1);
}

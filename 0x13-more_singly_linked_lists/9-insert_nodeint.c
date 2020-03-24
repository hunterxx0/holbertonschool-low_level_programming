#include "lists.h"
/**
 * insert_nodeint_at_index? (- add i'th node)?
 *
 * @h: input head
 * @i: index
 * @n: input node
 * Return: z
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int i, int n)
{
	size_t x, j = 0;
	listint_t *z, *t = *h;

	z = (listint_t *)malloc(sizeof(listint_t *));
	if (z == NULL || (*h == NULL && i != 0))
		return (NULL);
	z->n = n;
	z->next = NULL;
	if (i == 0)
	{
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
	x = 0;
	t = *h;
	while (x < i - 1)
	{
		t = t->next;
		x++;
	}
	z->next = t->next;
	t->next = z;
	return (z);
}

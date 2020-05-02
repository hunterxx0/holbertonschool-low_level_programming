#include "lists.h"
/**
 * add_dnodeint_end? (- add node at the end)?
 *
 * @h: input head
 * @n: input node
 * Return: z
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *z = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *t = *h;

	if (z == NULL)
		return (NULL);
	z->n = n;
	z->next = NULL;
	if (*h == NULL)
		*h = z;
	else
	{
	while (t->next)
		t = t->next;
	t->next = z;
	z->prev = t;
	}
	return (z);
}

#include "lists.h"
/**
 * add_dnodeint? (- add node at the beginning)?
 *
 * @h: input head
 * @n: input node
 * Return: n
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *z = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (z == NULL)
		return (NULL);
	z->n = n;
	z->next = *h;
	z->prev = NULL;
	*h = z;
	return (z);
}

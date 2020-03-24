#include "lists.h"
/**
 * add_nodeint_end? (- add node at the end)?
 *
 * @h: input head
 * @n: input node
 * Return: z
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *z = (listint_t *)malloc(sizeof(listint_t));
	listint_t *t = *h;

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
	}
	return (z);
}

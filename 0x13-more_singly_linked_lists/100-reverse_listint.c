#include "lists.h"
/**
 * reverse_listint? (- list rev)?
 *
 * @h: input head
 * Return: h
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *t = *h, *p = NULL, *n = NULL;

	if (*h == NULL)
		return (NULL);
	while (t)
	{
		n = t->next;
		t->next = p;
		p = t;
		t = n;
	}
	*h = p;

	return (t);
}

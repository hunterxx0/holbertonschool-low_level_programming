#include "lists.h"
/**
 * reverse_listint? (- list rev)?
 *
 * @h: input head
 * Return: h
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *p = NULL, *n = NULL;

	if (*h == NULL)
		return (NULL);
	while (*h)
	{
		n = (*h)->next;
		(*h)->next = p;
		p = *h;
		*h = n;
	}
	*h = p;

	return (*h);
}

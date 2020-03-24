#include "lists.h"
/**
 * pop_listint? (- rm the head node)?
 *
 * @h: input head
 * Return: n
 */
int pop_listint(listint_t **h)
{
	int n;
	listint_t *z = *h;

	if (*h == NULL)
		return (0);
	n = (*h)->n;
	free(*h);
	z = z->next;
	*h = z;
	return (n);
}

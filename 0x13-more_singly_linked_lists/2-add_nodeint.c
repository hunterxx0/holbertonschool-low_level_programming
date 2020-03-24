#include "lists.h"
/**
 * add_nodeint? (- add node at the beginning)?
 *
 * @h: input head
 * @n: input node
 * Return: n
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *z = (listint_t *)malloc(sizeof(listint_t));

	if (z == NULL)
		return (NULL);
	z->n = n;
	z->next = *h;
	*h = z;
	return (z);
}

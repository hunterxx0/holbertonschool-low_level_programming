#include "lists.h"
/**
 * reverse_listint? (- print list rev)?
 *
 * @h: input head
 * Return: z
 */
listint_t *reverse_listint(listint_t **h)
{

	if (*h == NULL)
		return(*h);
	reverse_listint(&(*h)->next);
	printf("%d\n", (*h)->n);
	return (*h);
}

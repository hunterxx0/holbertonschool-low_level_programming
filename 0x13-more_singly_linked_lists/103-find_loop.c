#include "lists.h"
/**
 * print_listint_safe? (- print safe list)?
 *
 * @h: input head
 * Return: x
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	s = f = h;
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (&s);
	}
	return (NULL);
}

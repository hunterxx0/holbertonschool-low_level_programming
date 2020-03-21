#include "lists.h"
/**
 * add_node_end? (- add a new node to the list)?
 *
 * @h: input format
 * @s: input str
 * Return: n
 */
list_t *add_node_end(list_t **h, const char *s)
{
	unsigned int i;
	list_t *n = (list_t *)malloc(sizeof(list_t));
	list_t *t;

	t = *h;
	if (n == NULL)
		return (NULL);
	n->str = strdup(s);
	for (i = 0; s[i] != '\0'; i++)
		;
	n->len = i;
	n->next = NULL;
	if (*h == NULL)
		*h = n;
	else
	{
	while (t->next != NULL)
		t = t->next;
	t->next = n;
	}
	return (n);
}

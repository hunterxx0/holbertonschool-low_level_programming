#include <stdlib.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog(:)? (- init new dog)?
 *
 * @n: name
 * @a: age
 * @o: owner
 * Return: p
 */
dog_t *new_dog(char *n, float a, char *o)
{
	dog_t *p;
	char *na;
	char *ow;
	int i, j, c = 0;

	if (n == NULL)
		n = "";
	if (o == NULL)
		o = "";
	p = (struct dog *)malloc(sizeof(struct dog));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; n[i] != '\n'; i++)
		;
	for (j = 0; o[j] != '\n'; j++)
		;
	na = malloc(sizeof(char) * i);
	if (na == NULL)
	{
		free(na);
		free(p);
		return (NULL);
	}
	for (c = 0; c < i; c++)
		na[c] = n[c];
	na[c] = '\0';
	ow = malloc(sizeof(char) * j);
	if (ow == NULL)
	{
		free(ow);
		free(p);
		return (NULL);
	}
	for (c = 0; c < j; c++)
		ow[c] = o[c];
	ow[c] = '\0';
	p->name = na;
	p->age = a;
	p->owner = ow;
	return (p);
}

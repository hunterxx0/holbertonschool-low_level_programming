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
	int i = 0, j = 0, c = 0;

	if (n == NULL)
		n = "";
	if (o == NULL)
		o = "";
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (n[i])
		i++;
	while (o[j])
		j++;
	na = malloc(sizeof(char) * (i + 1));
	if (na == NULL)
	{
		free(p);
		return (NULL);
	}
	for (c = 0; c < i; c++)
		na[c] = n[c];
	na[c] = '\0';
	ow = malloc(sizeof(char) * (j + 1));
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

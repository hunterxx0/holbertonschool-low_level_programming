#include <stdlib.h>
#include<stdlib.h>
#include "dog.h"
/**
 * strp? (- cp str)?
 *
 * @s: input int array size
 * Return: z
 */
char *strp(char *s)
{
	char *z;
	unsigned int i, j;

	if (s == NULL)
		return (NULL);
	for (j = 0; s[j] != '\0'; j++)
		;
	z = malloc(sizeof(char) * j + 1);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
	{
		if (i != j)
			z[i] = s[i];
		else
			z[j] = '\0';
	}
	return (z);
}
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
	struct dog *p;
	char *na;
	char *ow;

	p = malloc(sizeof(struct dog));
	if (p == NULL || a < 0)
	{
		free(p);
		return (NULL);
	}
	na = strp(n);
	if (na == NULL)
	{
		free(na);
		free(p);
		return (NULL);
	}
	ow = strp(o);
	if (ow == NULL)
	{
		free(ow);
		free(na);
		free(p);
		return (NULL);
	}
	(*p).name = na;
	(*p).age = a;
	(*p).owner = ow;
	return (p);
}

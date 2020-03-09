#include <stdlib.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - init new strct.
 *
 * @n: name
 * @a: age
 * @o: owner
 */
dog_t *new_dog(char *n, float a, char *o)
{
	struct dog *p;

	p = (struct dog *)malloc(sizeof(struct dog));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = n;
	p->age = a;
	p->owner = o;
	return (p);
}

#include <stdlib.h>
#include<stdlib.h>
#include "dog.h"
/**
 * free_dog(:)? (- set them free)?
 *
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

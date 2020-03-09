#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init strct.
 *
 * @d: strct
 * @name: name
 * @age: age
 * @owner: owner
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
	{
		printf("Name : %s\n", d->name);
		printf("Age : %f\n", d->age);
		printf("Owner : %s\n", d->owner);
	}
}

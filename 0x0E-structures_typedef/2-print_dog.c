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
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name : %s\n", d->name);
		else
			printf("Name : (nil)\n");
		printf("Age : %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner : %s\n", d->owner);
		else
			printf("Owner : (nil)\n");
}
}

#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the type dog
 * @d: dog_t
 * Return:void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

#include "dog.h"
#include <stdlib.h>
char *cpy(char *dest, char *source);
int length(char *name);
/**
 * new_dog - Short description
 * @name:char
 * @age:float
 * @owner:char
 * Return:void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nd;
nd = malloc(sizeof(dog_t));
if (nd == NULL)
return (NULL);
if (name == NULL)
nd->name = NULL;
else
{
nd->name = malloc(length(name) + 1);
if (nd->name == NULL)
{
free(nd);
return (NULL);
}
nd->name = cpy(nd->name, name);
}
if (owner == NULL)
nd->owner = NULL;
else
{
nd->owner = malloc(length(owner) + 1);
if (nd->owner == NULL)
{
free(nd->name);
free(nd);
return (NULL);
}
nd->owner = cpy(nd->owner, owner);
}
nd->age = age;
return (nd);
}
/**
 * length - Short description
 * @name:char
 * Return:int
 */
int length(char *name)
{
int i = 0;
for (; name[i] != '\0'; i++)
;
return (i);
}
/**
 * cpy - Short description
 * @dest:char
 * @source:char
 * Return:char
 */
char *cpy(char *dest, char *source)
{
char *d = dest;
while (*source)
*d++ = *source++;
*d = '\0';
return (dest);
}

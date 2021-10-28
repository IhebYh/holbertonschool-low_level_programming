#include "main.h"
#include <stdlib.h>
/**
 * _realloc - entry point
 * @old_size:int
 * @new_size:int
 * @ptr:void
 * Return:void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
s = malloc(new_size);
free(ptr);
return (s);
}

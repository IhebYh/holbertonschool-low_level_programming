#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry point
 * @nmemb:int
 * @size:int
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *s;
if (nmemb * size == 0)
return (NULL);
s = malloc(nmemb * size);
if (s == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
s[i] = '\0';
return (s);
}

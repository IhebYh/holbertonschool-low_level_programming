#include "main.h"
#include<stdlib.h>
/**
 * create_array - entry point
 * @size: int
 * @c:char
 * Return:Null or pointer
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *allocated_size;
if (size == 0)
return (NULL);
allocated_size = malloc(size * sizeof(char));
if (allocated_size == 0)
return (NULL);
else
for (i = 0; i < size; i++)
allocated_size[i] = c;
return (allocated_size);
}

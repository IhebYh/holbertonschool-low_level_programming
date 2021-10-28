#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry point
 * @min:int
 * @max:int
 * Return:int
 */
int *array_range(int min, int max)
{
int i, j = 0;
int *s;
if (min > max)
return (NULL);
s = malloc((max - min + 1) * sizeof(int));
if (s == NULL)
return (NULL);
for (i = min; i < max; i++, j++)
s[j] = i;
return (s);
}

#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid - entry point
 * @width:int
 * @height:int
 * Return:Null or pointer
 */
int **alloc_grid(int width, int height)
{
int i, j, **a;
if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
a = (int **) malloc(width * sizeof(int *));
if (a == 0)
return (NULL);
for (i = 0; i < width; i++)
{
a[i] = (int *) malloc(height * sizeof(int));
if (a[i] == 0)
return (NULL);
}
for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
a[i][j] = 0;
return (a);
}

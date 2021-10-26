#include "main.h"
#include<stdlib.h>
/**
 * free_grid - entry point
 * @grid:int
 * @height:int
 * Return:Null or pointer
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
free(grid[i]);
free(grid);
}

#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees previously created malloc for array
 *@grid: input value
 *@height: input value
 *Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

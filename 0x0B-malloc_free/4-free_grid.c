#include <stdlib.h>
#include "holberton.h"
/**
*free_grid - free grid
*@grid : the grid
*@height : the height
*Return: Always 0
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
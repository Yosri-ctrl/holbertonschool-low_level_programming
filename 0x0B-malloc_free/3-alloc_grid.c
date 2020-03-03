#include <stdlib.h>
#include "holberton.h"
/**
*alloc_grid - concatenates two strings.
*@width : the width
*@height : the height
*Return: Always 0
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **a;

if (width <= 0 || height <= 0)
return (NULL);

a = malloc(height * sizeof(*a));
if (a == NULL)
return (NULL);

for (i = 0; i < height ;i++)
{
a[i] = malloc(width * sizeof(*a));
if (a[i] == NULL)
{
free (a);
return (NULL);
}
for (j = 0; j < width; j++)
a[i][j] = 0;
}

return (a);
}

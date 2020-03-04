#include <stdlib.h>
#include "holberton.h"
/**
*argstostr - free grid
*@ac : the grid
*@av : the height
*Return: Always 0
*/
char *argstostr(int ac, char **av)
{
int i, j, s = 0;
char *c, *x;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, s++);
s++;
}

c = malloc(s * sizeof(char));
if ( c == NULL)
return (NULL);

x = c;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*c = av[i][j];
c++;
}
*c = '\n';
c++;
}


return (x);
}

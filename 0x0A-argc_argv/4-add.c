#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - print the arguments
*@argc : nbr of parametre
*@argv : array holing the paranetre
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int i, s = 0;

for (i = 0; i < argc; i++)
{
if (*argv[i] > 'a' && *argv[i] < 'z')
{
printf("ERROR\n");
return (1);
}
s += atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}

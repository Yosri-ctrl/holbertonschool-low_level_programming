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
int i, s = 1;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
s *= atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}
else
{
printf("ERROR\n");
return (1);
}

}

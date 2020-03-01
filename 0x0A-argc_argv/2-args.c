#include <stdio.h>
/**
*main - print the arguments
*@argc : nbr of parametre
*@argv : array holing the paranetre
*Return: Always 0
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}

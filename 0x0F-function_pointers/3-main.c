#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - clac two nmb
 * @argc: nmb of argv arg
 * @argv:the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*res)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

res = get_op_func(argv[2]);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%d\n", res(num1, num2));

return (0);
}

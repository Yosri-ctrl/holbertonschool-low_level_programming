#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a : the first nmb
 * @b : the second nmb
 * Return: Always 0
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference
 * @a : the first nmb
 * @b : the second nmb
 * Return: Always 0
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product
 * @a : the first nmb
 * @b : the second nmb
 * Return: Always 0
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - result of division
 * @a : the first nmb
 * @b : the second nmb
 * Return: Always 0
 */
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
else
{
printf("Error\n");
exit(100);
}
}

/**
 * op_mod - rest of division
 * @a : the first nmb
 * @b : the second nmb
 * Return: Always 0
 */
int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
else
{
printf("Error\n");
exit(100);
}
}

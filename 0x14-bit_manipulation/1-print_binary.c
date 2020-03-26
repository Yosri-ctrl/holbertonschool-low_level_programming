#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_binary - print_binary
 * @n : the nbr
 **/
void print_binary(unsigned long int n)
{
    int x, y = n;

    if (n == 0)
    {
    printf("0");
    return;
    }
    else
    {
        for (x = 0; (y >>= 1) > 0; x++)
        ;
        while(x >= 0)
        {
            if ((n >> x) & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            x--;
        }

    }
}
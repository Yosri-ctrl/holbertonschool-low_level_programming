#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
* rev_string- print a string reversed.
* @s : the string.
* Return: Always 0 (success)
*/
void rev_string(char *s)
{
int i, j, k;
char a;

for (k = 0; s[k] != '\0'; k++)
{}

for (i = 0; i < k; i++)
{
for (j = (k/2); j >= 0; j--)
{
a = s[i];
s[i] = s[j];
s[j] = a;
}
}

}

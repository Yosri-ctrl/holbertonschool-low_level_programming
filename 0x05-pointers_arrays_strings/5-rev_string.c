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
int i,j;
char k,a;

k = strlen(s)-1;
for (i = 0; i < k; i++)
{
for (j = k; j >= 0; j--)
{
  a = s[i];
  s[i] = s[j];
  s[j] = a;
}
}

}

#include "holberton.h"
/**
* rev_string- print a string reversed.
* @s : the string.
* Return: Always 0 (success)
*/
void rev_string(char *s)
{
int i, len, k;
char a;

for (k = 0; s[k] != '\0'; k++)
;
len = k;
for (i = 0, k--; i < (len / 2); k--, i++)
{
a = s[i];
s[i] = s[k];
s[k] = a;
}

}

#include "holberton.h"
/**
* _strlen_recursion - function that prints the length
*@s : the char
*Return: Always 0
*/
int _strlen_recursion(char *s)
{
  int x = 0;

  if (*s == '\0')
  return (0);

  x = 1 + _strlen_recursion(s + 1);

  return (x);
}

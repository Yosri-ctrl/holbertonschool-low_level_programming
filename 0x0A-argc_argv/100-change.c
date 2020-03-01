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
  int x = 0, v;
  int c[10] = {25, 10, 5, 2, 1};
  unsigned i;
  (void)argc;

  if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

  if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (1);
	}

  v = atoi(argv[1]);

  while(v != 0)
  {
    for (i = 0; i < 5; i++)
    {
    if (v >= c[i])
    {
      v -= c[i];
      x++;
      break;
    }
    }
  }
  printf("%d\n", x);

  return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
*main - print the arguments
*@argc : nbr of parametre
*@argv : array holing the paranetre
*Return: Always 0
*/
int main(int argc, char *argv[])
{
  int x = 0, v;
  (void)argc;

  if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

  v = atoi(argv[1]);

  while(v != 0)
  {
    if (v >= 25)
    {
      v -= 25;
      x++;
    }
    else if (v <= 25 && v >= 10)
    {
      v -= 10;
      x++;
    }
    else if (v <= 10 && v >= 5)
    {
      v -= 5;
      x++;
    }
    else if (v <= 5 && v >= 2)
    {
      v -= 25;
      x++;
    }
    else
    {
      v -= 1;
      x++;
    }
  }
  printf("%d\n", v);
  printf("%d\n", x);

  return (0);
}

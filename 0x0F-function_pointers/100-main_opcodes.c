#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of its own main function
 * @argc: nbm of arguments in argv
 * @argv: list of te arguments
 */
void main(int argc, char *argv[])
{
if (argc != 2)
printf("Error\n");
exit(1);

if (argv[1] < 0)
printf("Error\n");
exit(2);
}

#include 
/**
 * main - print the opcodes of its own main function
 * @argc: nbm of arguments in argv
 * @argv: list of te arguments
 */
void main(int argc, char *argv[])
{
if (argc != 3)
printf("Error");
exit(1);

if (atoi(argv[1]) <= 0)
printf ("Error");
exit(2);
}
#include "holberton.h"
#include <stdio.h>
#define size 1204
/**
*main - copies the content of a file to another file.
*@ac: the nbr of elements in argv
*@av: an array containg the arguments
*Return: Return 1 if success
**/
int main(int ac, char *av[])
{
int ft, ff, rcheck = 1, wcheck;
char buff[size];

if (ac != 3)
{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"); exit(97); }

ff = open(av[1], O_RDONLY);
if (ff == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98); }
ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (ft == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99); }
while (rcheck)
{
rcheck = read(ff, buff, size);
if (rcheck == -1)
{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98); }
if (rcheck > 0)
{
wcheck = write(ft, buff, rcheck);
if (wcheck == -1)
{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99); }
}
}

if (close(ff) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
exit(100); }
if (close(ft) == -1)
{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
exit(100); }
return (0);
}

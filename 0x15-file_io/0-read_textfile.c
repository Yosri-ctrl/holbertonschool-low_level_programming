#include "holberton.h"

/**
*read_textfile - read a text file and print it the stander output
*@filename: the file to treat
*@letters: the nbr of characters in the filename
*Return: the actuale size of letters printed
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *str;
ssize_t w, r;
int fp;

if (filename == NULL)
return (0);
fp = open(filename, O_RDWR);
if (fp == -1)
return (0);
str = malloc(sizeof(char) * letters);
if (str == NULL)
{
free(str);
return (0);
}
r = read(fp, str, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, str, r);
if (w == -1)
return (0);

close(fp);
return (w);
}

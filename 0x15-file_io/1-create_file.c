#include "holberton.h"

/**
*read_textfile - read a text file and print it the stander output
*@filename: the file to treat
*@letters: the nbr of characters in the filename
*Return: the actuale size of letters printed
**/
int create_file(const char *filename, char *text_content)
{
int fp, count, i;

if (filename == NULL)
return (-1);
fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fp == -1)
return (-1);

if (text_content == NULL)
{
close(fp);
return (1);
}
else
{
for (i = 0; text_content[i] != '\0'; i++)
;
count = write(fp, text_content, i);
if (count == -1)
return (-1);
}

close(fp);
return (1);
}
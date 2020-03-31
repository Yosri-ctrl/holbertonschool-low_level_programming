#include "holberton.h"
/**
*append_text_to_file - append_text_to_file
*@filename: the file to treat
*@text_content: the content to print
*Return: Return 1 if success
**/
int append_text_to_file(const char *filename, char *text_content)
{
    int fp, count, w;

    if (filename == NULL)
        return (-1);
    if (text_content == NULL)
        return (1);

    fp = open(filename, O_WRONLY | O_APPEND);
    if (fp == -1)
    return (-1);

    for(count = 0; text_content[count] != '\0'; count++)
    ;
    w = write(fp, text_content, count);
    if (w == -1)
    return (-1);

    close(fp);
    return (1);
}
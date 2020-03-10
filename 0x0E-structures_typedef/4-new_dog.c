#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - print the dog status
 * @new_dog : the dog name
 * @age : the dog age
 * @owner : the owner of the dog
 * Return: the new dog
 */
dog_t *new_dog(char *new_dog, float age, char *owner)
{
struct dog *a;
char *x, *y;
int i, j, k, l;

for (i = 0; new_dog[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;

a = malloc(sizeof(struct dog));
if (a == NULL)
return (NULL);

x = malloc(sizeof(char) * i + 1);
if (x == NULL)
{
free(x);
free(a);
return (NULL);
}
for (k = 0; k <= i; k++)
x[k] = new_dog[k];

y = malloc(sizeof(char) * j + 1);
if (y == NULL)
{
free(x);
free(y);
free(a);
return (NULL);
}
for (l = 0; l <= j; l++)
y[l] = owner[l];

a->name = x;
a->age = age;
a->owner = y;

return (a);
}

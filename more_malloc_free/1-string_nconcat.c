#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: numbers of bytes to be concatenated
 * Return: string concatenated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str = NULL;
unsigned int i;
char *aux = NULL;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

new_str = malloc(strlen(s1) + n + 1);

if (new_str == NULL)
{
return (NULL);
}

aux = malloc(n + 1);

if (aux == NULL)
{
free(new_str);
return (NULL);
}

for (i = 0; i < n; i++)
{
aux[i] = s2[i];
}
aux[n] = '\0';

strcpy(new_str, s1);
strcat(new_str, aux);
free(aux);
return (new_str);
}

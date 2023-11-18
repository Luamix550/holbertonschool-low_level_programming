#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: string concatenates
*/
char *str_concat(char *s1, char *s2)
{
char *new_str;

if (s1 == NULL)
{
s1 = " ";
}

if (s2 == NULL)
{
s2 = " ";
}

new_str = malloc(strlen(s1) + strlen(s2) + 1);
if (new_str == NULL)
{
free(new_str);
return (NULL);
}

new_str[0] = '\0';
strcat(new_str, s1);
strcat(new_str, s2);

return (new_str);
}

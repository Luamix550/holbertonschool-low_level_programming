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
char *new_str;
size_t s1_len, s2_len;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}

new_str = (char *) malloc(s1_len + n + 1);
if ( new_str == NULL){
    return NULL;
}

strcpy(new_str, s1);

strncat(new_str, s2, n);

return (new_str);
}

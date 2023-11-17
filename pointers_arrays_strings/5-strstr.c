#include "main.h"
/**
 * _strstr - Find 'needle' in 'haystack'.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Pointer to found substring or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}

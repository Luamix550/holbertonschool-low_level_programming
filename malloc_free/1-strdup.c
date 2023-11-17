#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer with string copy 
 * @str: string to be duplicated
 * Return: string duplicated
*/
char *_strdup(char *str)
{

char *arr;

if(str == NULL)
{
return (NULL);
}

arr = malloc(strlen(str) + 1);

if (arr == NULL)
{
return (NULL);
}

strcpy(arr, str);

return (arr);
}

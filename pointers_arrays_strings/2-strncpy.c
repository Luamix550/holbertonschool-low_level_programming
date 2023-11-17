#include "main.h"
/**
 * *_strncpy - copy string
 * @dest: get the string
 * @src: pointer that has the string
 * @n:number of times characters can be printed
 * Return: tmp
 */
char *_strncpy(char *dest, char *src, int n)
{

char *tmp = dest;

while (*src && n--)
{

*dest++ = *src++;

}
while (n > 0)
{
*dest++ = '\0';
n--;
}

return (tmp);

}

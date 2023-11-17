#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: represent size of the array
 *@c:represents the character with which each element of the array
 *Return: arr
 *
*/
char *create_array(unsigned int size, char c)
{

unsigned int i;

char *arr;

if (size == 0)

return (NULL);

*arr = (char *)malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}


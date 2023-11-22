#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: min range
 * @max: max range
 *
 * Return: array of the intergers
*/
int *array_range(int min, int max)
{
int *ptr = NULL;
int i = 0;

if (min > max)
{
return (NULL);
}

ptr = malloc(sizeof(int) * (max - min + 1));

if (ptr == NULL)
{
return (NULL);

}
while (min <= max)
{
ptr[i] = min;
i++;
min++;
}
return (ptr);
}

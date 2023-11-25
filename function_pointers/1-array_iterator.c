#include "function_pointers.h"
/**
 * array_iterator - print a array.
 * @array: an array
 * @size: size of the element
 * @action:pointer to array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    unsigned int i; // Change to unsigned int for consistency with 'size'

    if (size == 0)
        return NULL;

    char *arr = (char *)malloc(size * sizeof(char));

    if (arr == NULL)
    {
        return NULL;
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return arr;
}
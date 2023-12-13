#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

<<<<<<< HEAD
char *arr;

if (size == 0)
=======
    return s;
}
>>>>>>> 5e0e96ca8eecbfa220eb3b9387f67fb6e8da6b4c

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    char *c_ptr;

<<<<<<< HEAD
*arr = (char *)malloc(size * sizeof(char));
=======
    if (nmemb == 0 || size == 0)
        return NULL;
>>>>>>> 5e0e96ca8eecbfa220eb3b9387f67fb6e8da6b4c

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    c_ptr = ptr;
    for (i = 0; i < nmemb * size; i++)
        c_ptr[i] = 0;

    return ptr;
}

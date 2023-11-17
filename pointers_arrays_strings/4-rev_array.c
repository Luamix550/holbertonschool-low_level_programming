#include "main.h"
/**
 * reverse_array - print array in rev
 * @a: an array of integers
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;

while (i < j)
{
int aux = a[i];
a[i] = a[j];
a[j] = aux;

i++;
j--;
}
}

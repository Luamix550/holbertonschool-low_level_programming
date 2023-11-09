#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 *
 * @a: This pointer points to the first element of an array of integers.
 * @n: represents the size of the array
 */
void print_array(int *a, int n)
{
int i;

if (n < 0)
{
return;
}

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d\n", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
}

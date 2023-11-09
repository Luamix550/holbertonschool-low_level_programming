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
if (n <= 0 || a == NULL)
{
return;
}
printf("%d", a[0]);
for (int i = 1; i < n; i++){
printf(", %d", a[i]);
}
printf("\n");
}

#include "main.h"
/**
 * print_triangle - prints a # depending on the number given to size
 * @size: get a number
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
return;
}

for (i = 1; i <= size; ++i)
{
for (k = 0; k <= size - i; ++k)
{
_putchar(' ');
}
for (j = 1 ; j <= i ; ++j)
{
_putchar('#');
}
_putchar('\n');
}
}

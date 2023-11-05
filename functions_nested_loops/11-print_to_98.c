#include "main.h"
/**
 * print_to_98 - print numbers received up to 98
 * @n: get number
 */
void print_to_98(int n)
{

int aux;

for (aux = n; aux <= 98; ++aux)
{
printf("%d", aux);
if (aux < 98)
{
printf(", ");
}
}
if (n > 98)
{
for (aux = n; aux >= 98; --aux)
printf("%d, ", aux);
}
putchar('\n');
}

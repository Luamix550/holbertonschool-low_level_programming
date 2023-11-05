#include "main.h"
/**
 * times_table - Print 9 times tables, starting with 0
 */
void times_table(void)
{
int row, column;
int num;

for (row = 0; row < 10; row++)
{
_putchar('0');
for (column = 1; column < 10; column++)
{
num = row * column;
_putchar(',');
_putchar(' ');
if (num < 10)
{
_putchar(' ');
_putchar((num % 10 ) + '0');
}
else{
_putchar((num / 10 ) + '0');    
_putchar((num % 10 ) + '0');
}
}
_putchar('\n');
}
}
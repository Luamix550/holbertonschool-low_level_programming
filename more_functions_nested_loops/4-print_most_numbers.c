#include "main.h"
/**
 * print_numbers - print numbers (0 to 9)
 */
void print_most_numbers(void)
{
int a;

for (a = '1' ; a <= '9' ; ++a)
{
if (a != '2' && a != '4')
_putchar(a);
}
_putchar('\n');
}

#include "main.h"
/**
 * _print_rev_recursion - print rev string
 * @s:Expects a string as input.
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

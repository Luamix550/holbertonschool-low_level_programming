#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be reversed and printed
 */
void rev_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

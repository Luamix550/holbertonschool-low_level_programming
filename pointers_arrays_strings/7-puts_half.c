#include "main.h"
/**
 * puts_half - print half of string
 * @str: gets the string
 */
void puts_half(char *str)
{
int len = 0;
int i = 0;

while (str[len] != '\0')
{
len++;
}

if (i >= len)
{
return;
}

i = len / 2;

if (len % 2 == 1)
{
i++;
}

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

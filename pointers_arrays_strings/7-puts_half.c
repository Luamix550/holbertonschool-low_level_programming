#include "main.h"
/**
 * puts_half - print half of string
 * @str: gets the string
 */
void puts_half(char *str)
{
int len, i;

len = 0;
while (str[len] != '\0')
len++;

i = len / 2;

if (len % 2 == 1)
len++;

while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

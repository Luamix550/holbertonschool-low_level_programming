#include "main.h"
/**
  * _atoi -  convert a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;


if (s[i] == '-')
{
sign = -1;
i++;
}


while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (sign * result);
}

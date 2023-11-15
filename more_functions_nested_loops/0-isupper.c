#include "main.h"
/**
 * _isupper - evaluates that the number is in capital letters
 *@c: get number
 *Return: 1 if the number is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 *@c: get number
 *Return: return 1 if is a digit, if not returns 0
 */
int _isdigit(int c)
{
if(c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}

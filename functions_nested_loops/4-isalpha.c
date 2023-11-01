#include "main.h"
/**
 * _isalpha -: checks for alphabetic characters
 * @c: the character to check (should be an ASCII character)
 * Return: 1 true
 *         0 false
 */
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

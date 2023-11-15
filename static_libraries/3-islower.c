#include "main.h"
/**
 * _islower -: checks for lowercase character
 * @c: the character to check (should be an ASCII character)
 * Return: 1 true
 *         0 false
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

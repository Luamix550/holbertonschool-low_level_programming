#include "main.h"
/**
 *  _strlen_recursion - length of the string.
 * @s:takes the length of the string
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{

if (*s == '\0')
    return (0);

else

return (1 + _strlen_recursion(s + 1));
}

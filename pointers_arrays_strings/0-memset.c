#include "main.h"
/**
*_memset - memory space
*@s:pointer
*@b:constant
*@n:bytes
*Return: s
*/
char_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n && s[i] != '\0'; i++)
{
s[i] = b;
}

return (s);
}

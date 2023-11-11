#include "main.h"
/**
*_memset - memory space
*@s:pointer
*@b:constant
*@n:bytes
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

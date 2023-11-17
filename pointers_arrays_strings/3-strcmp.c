#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 the program has been executed correctly
 */
int _strcmp(char *s1, char *s2)
{

int i = 0;
int y;

y = strlen(s1);

while (i < y)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

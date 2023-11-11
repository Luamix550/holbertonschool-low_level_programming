#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: string containing the character to find
 * @c: character to find
 * Return: character found && NULL if not found the character.
 */
char *_strchr(char *s, char c)
{

int i;

int length = strlen(s);

for (i = 0; i < length; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}

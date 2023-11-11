#include "main.h"
#include <string.h>
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

    for (i = 0; i <= length; i++)
    {
        if (s[i] == c || (c == '\0' && s[i] == '\0'))
        {
            return (&s[i]);
        }
    }

    return NULL;
}
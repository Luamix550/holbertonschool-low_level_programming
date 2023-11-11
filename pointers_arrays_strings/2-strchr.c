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
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;

for (int start = 0, end = length - 1; start < end; start++, end--)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
}
}

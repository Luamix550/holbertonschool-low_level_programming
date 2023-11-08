#include "main.h"
/**
 * rev_string - Prints a string in reverse followed by a new line.
 * @s: The string to be reversed and printed
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

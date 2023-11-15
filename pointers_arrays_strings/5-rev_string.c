#include "main.h"

/**
 * rev_string - rev string
 * @s: iterates over the string
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;
char aux;

while (s[length] != '\0')
{
length++;
}

end = length - 1;

while (start < end)
{
aux = s[start];
s[start] = s[end];
s[end] = aux;
start++;
end--;
}
}

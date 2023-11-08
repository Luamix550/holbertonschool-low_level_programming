#include "main.h"

/**
 * rev_string - reverse string
 *@s: string
*/
void rev_string(char *s)
{

int b;
int a = 0;
int c;
char d;

while (s[a] != '\0')
{
a++;
}

b = a - 1;
for (c = 0; c < a / 2; c++)
{
d = s[c];
s[c] = s[b];
s[b] = d;
b--;
}
}

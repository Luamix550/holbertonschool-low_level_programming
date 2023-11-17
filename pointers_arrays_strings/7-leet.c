#include "main.h"

/**
 * leet - code
 * @scr: pointer
 * Return: scr
 */
char *leet(char *scr)
{
int x, y, z;
char a[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
char b[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

y = strlen(scr);
x = 0;
while (x < y)
{
for (z = 0; z <= 9; z++)
{
if (scr[x] == a[z])
{
scr[x] = b[z];
}
}
x++;
}
return (scr);
}

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{


while(*src && n--)
{
*dest++ = *src++; 
}
while (n > 0)
{
    *dest++ = '\0';
    n--;
}

return (dest);

}
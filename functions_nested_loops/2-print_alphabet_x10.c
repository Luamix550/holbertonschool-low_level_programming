#include "main.h"
/**
* print_alphabet_x10 - Print alphabet
*
*/
void print_alphabet_x10(void)
{
int i;
char alp;

for (i = 0; i < 10; ++i)
{
_putchar('\n');
for (alp = 'a'; alp <= 'z'; ++alp)
{
_putchar(alp);    
}
}
_putchar('\n');
return (0);
}


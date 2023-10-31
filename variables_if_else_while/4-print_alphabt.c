#include <stdio.h>
/**
 * main - Program start.
 *
 * Return: Always 0.
 */
int main(void)
{

char alp;

for (alp = 'a' ; alp <= 'z' ; alp++)
if (alp != 'e' && alp != 'q')
{
putchar(alp);
}
putchar("\n");
return (0);
}

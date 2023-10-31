#include <stdio.h>
/**
 * main - Print string _putchar only using putchar
 *
 * Return: Always 0.
 */
int main(void)
{

char str[] = "_putchar";
int count = 0;

while (str[count] != '\0')
{
putchar(str[count]);
count++;
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * print_last_digit - Print the last num of the n
 *
 * @n: point entry
 *
 * Return: Return value of the aux
 */

int print_last_digit(int n)
{
int aux;

aux = n % 10;
if (n < 0)
{
aux = aux * -1;
_putchar(aux);
}
_putchar(aux + '0');
return (aux);
}

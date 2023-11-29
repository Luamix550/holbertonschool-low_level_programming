#include "variadic_functions.h"
/**
 * sum_them_all - sum of the arguments
 * @n: numbers of the arguments
 * Return: sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;

va_list argument;
va_start(argument, n);

for (i = 0; i < n; i++)
{
sum += va_arg(argument, int);
}
va_end(argument);
return (sum);
}

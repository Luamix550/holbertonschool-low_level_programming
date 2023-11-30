#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: spaces in the string
 * @n: string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *string;

va_list arguments;
va_start(arguments, n);

for (i = 0; i < n; ++i)
{
string = va_arg(arguments, const char *);

printf("%s", string);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(arguments);
printf("\n");
}

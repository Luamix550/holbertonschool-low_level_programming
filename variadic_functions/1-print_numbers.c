#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: spaces and commas
 * @n: numbers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

    va_list argument;
    unsigned int i;
    int num;

    va_start(argument, n);

    for (i = 0; i < n; i++)
    {

        num = va_arg(argument, int);

        printf("%d", num);

        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }  
    }
va_end(argument);
printf("\n");
}

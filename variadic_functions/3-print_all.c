#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    char *str;
    va_list args;
    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
        case 'c':
            printf("%c, ", va_arg(args, int));
            break;
        case 'i':
            printf("%i, ", va_arg(args, int));
            break;
        case 'f':
            printf("%f, ", va_arg(args, double));
            break;
        case 's':
            str = va_arg(args, char *);
            if (str == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", str);
            }
            break;
        default:
            break;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

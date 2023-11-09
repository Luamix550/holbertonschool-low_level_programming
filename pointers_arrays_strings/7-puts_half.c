#include "main.h"

/**
 * puts_half - print half of string
 * @str: gets the string
 */
void puts_half(char *str)
{
    int len = 0;
    int i = 0;

    // Calcular la longitud de la cadena
    while (str[len] != '\0') {
        len++;
    }

    // Calcular el índice de inicio para imprimir la segunda mitad
    i = (len + 1) / 2;

    if (len > 0) {
        // Imprimir la segunda mitad de la cadena si la longitud es mayor que 0
        while (str[i] != '\0') {
            _putchar(str[i]);
            i++;
        }
    }
    _putchar('\n');
}
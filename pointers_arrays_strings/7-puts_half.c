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
    i = len / 2;

    if (len == 0) {
        // Si la cadena está vacía, simplemente imprime un carácter de nueva línea y retorna
        _putchar('\n');
        return;
    }

    if (len % 2 == 1) {
        i++; // Aumentar i en 1 si la longitud es impar
    }

    // Imprimir la segunda mitad de la cadena
    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
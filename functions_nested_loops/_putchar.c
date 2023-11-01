#include <unistd.h>

/**
 * _putchar - Escribe un carácter en la salida estándar (stdout).
 * @c: El carácter a escribir
 *
 * Return: El número de caracteres escritos (1 en este caso), o -1 en caso de error.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

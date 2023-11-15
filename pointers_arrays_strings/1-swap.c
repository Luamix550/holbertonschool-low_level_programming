#include "main.h"
/**
 * swap_int - exchanges the value of a and b
 * @a: obtains the value of b
 * @b: obtains the value of a
 */
void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}

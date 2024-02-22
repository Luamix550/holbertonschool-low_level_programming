#include "main.h"
/**
 * factorial - factorial of n
 * @n: number to be factored
 * Return: returns the factored number
*/
int factorial(int n)
{

    if (n < 1)
    {
        return (-1);
    }
    else if (n == 1)
    {
        return (1);
    }
    else
    {
    return (n * factorial(n - 1));
    }
}

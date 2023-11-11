#include "main.h"
#include <unistd.h>

void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;

while (i < j){
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;

    i++;
    j--;
}
}

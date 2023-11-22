#include "main.h"
/**
 * 
 * 
*/
int *array_range(int min, int max)
{
int *ptr = NULL;
int i = 0;

if(min > max){
return (NULL);
}

ptr = malloc( sizeof(int) * (max - min + 1));

if( ptr == NULL)
{
return (NULL);

}

}
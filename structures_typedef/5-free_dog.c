#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void free_dog(dog_t *d)
{

if(d)

free(d->name);
free(d->owner);

}
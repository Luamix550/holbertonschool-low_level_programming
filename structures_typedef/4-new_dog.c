#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

    if (newdog == NULL) {
        return NULL;
    }

    newdog->name = strdup(name);

    if (newdog->name == NULL) {
        free(newdog);
        return NULL;
    }

    newdog->age = age;
    newdog->owner = strdup(owner);

    if (newdog->owner == NULL) {
        free(newdog->name);
        free(newdog);  
        return NULL;
    }

    return newdog;
}
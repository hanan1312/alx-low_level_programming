#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
*print_dog - start
*Description: 'print string'
*@d: input
*Return: void
*/
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
return;
}

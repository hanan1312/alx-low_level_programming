#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog
*Description: 'print string'
*@d: first
*@name: second
*@age: length
*@owner: owner
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
return;
}

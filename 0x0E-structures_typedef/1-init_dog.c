#include "dog.h"
/**
 * init_dog - to  initialize a variable of type struct dog
 * @d: parameter name for struct dog type
 * @name: name of defined struct dog
 * @age: age of defined struct dog
 * @owner: owner of defined struct dog
 * Return: void type
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable of type struct dog
 *
 * @d: passed in address of struct dog
 * @name: param name
 * @age: param age
 * @owner: param owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	/*in main, it passed in an address of the struct variable my_dog*/
	/*so use pointer operation-> to update the value in main function */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

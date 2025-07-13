#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_len - Function manually compute length of a C-string
 * @s: passed in string needs to be calculated
 * Return: the length of the string
 */

int get_len(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
		len++;
	return (len);
}

/**
 * new_dog - Function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 * Return: a new created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *d;
	int i, name_len = get_len(name), owner_len = get_len(owner);

	/* allocate memory for struct dog_t */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* allocate memory for name */
	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{	free(d);
		return (NULL);
	}

	/* store a copy of name */
	for (i = 0; i < name_len; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	/* allocate memory for owner */
	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	/* store a copy of owner*/
	for (i = 0; i < owner_len; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	/* assign age of the dog*/
	d->age = age;

	return (d);
}

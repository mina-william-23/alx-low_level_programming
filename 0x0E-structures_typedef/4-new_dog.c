#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copy string src into dest string
 *
 * @src: source string
 * Return: copied string pointer
 */
char *_strcpy(char *src)
{
	int len;
	char *dest;

	if (!src)
		return (0);

	for (len = 0; src[len]; len++)
		;

	dest = malloc(len + 1);
	if (!dest)
		return (0);

	for (; len >= 0; len--)
		dest[len] = src[len];

	return (dest);
}

/**
 * new_dog - create new struct dog and initialize it
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: dog_t pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(*dog));
	if (!dog)
		return (0);

	dog->name = _strcpy(name);
	dog->owner = _strcpy(owner);
	dog->age = age;

	return (dog);
}

#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct elements
 * @d: struct dog pointer
 * if d is NULL print nothing
 * if any member is NULL
 * print member: (ni)
*/
void print_dog(struct dog *d)
{

	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n",  d->owner ? d->owner : "(nil)");
}

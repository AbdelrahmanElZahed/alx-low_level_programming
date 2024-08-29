#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: If any member of the struct is NULL, print (nil) instead.
 *               If the pointer d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}


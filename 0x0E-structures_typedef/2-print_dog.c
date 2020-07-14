#include "dog.h"
/**
 * print_dog - This function willprint the parameters of the new dog
 * @d: The data of the new dog which is a pointer to the structure
 * Return: is d is NULL print nothing, return 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)",
	d->age, d->owner ? d->owner : "(nil)");
}

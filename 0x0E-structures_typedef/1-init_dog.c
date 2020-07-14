#include "dog.h"
/**
 * init_dog -is function that initilize a variable of type struct dog
 * values of another dog
 * @c: Values from another dog
 * @name: The name of any new dog
 * @age: The age of any new dog
 * @owner: The owner name of any new dog
 * Return: No return
 */
void init_dog(struct dog *c, char *name, float age, char *owner)
{
	if (c == NULL)
	return;
	c->name = name;
	c->age = age;
	c->owner = owner;
}

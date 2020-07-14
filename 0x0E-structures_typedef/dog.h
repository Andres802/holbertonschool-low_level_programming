#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>

int _putchar(char c);
/**
 * struct dog - Define new type struct dog with the folowing elements:
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0 always
 */
/** First I do clasified the types of thr structure*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
	/** function to intialize  the dog function*/
	void init_dog(struct dog *d, char *name, float age, char *owner);
	/** function that prints the dog function*/
	void print_dog(struct dog *d);
	/** function of the new structure of the dog function*/
	dog_t *new_dog(char *name, float age, char *owner);

	void free_dog(dog_t *d);
#endif

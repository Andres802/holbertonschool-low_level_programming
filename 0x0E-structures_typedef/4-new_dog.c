#include <stdlib.h>
#include "dog.h"
/**
 * new dog - New variable with the new dog with new parameters
 * @owner: pointer to the variable to copy to new dog
 * @name: pointer to the variable to copy to new dog
 * @age: float variable type
 * Return: to dog_t or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/** dog_t is the new name of the dog*/
/** lets declare the variables*/
int len_1;
int len_2;
int c;

dog_t *new_dog = malloc(sizeof(dog_t));
/** check if the new dog function is a null values or it doea have vales*/
if (new_dog == NULL)
return (new_dog);
/*
* Lets check the size of the new name and new
* owner with our declared vaeiables
*/
for (len_1 = 0; name[len_1]; len_1++)
;
for (len_2 = 0; owner[len_2]; len_2++)
;
/*
 * Add in new_dog the size of the variable
 * above with malloc dereference new_dog to each
 * of the variable, in other word set new_dog to new vaules
 * plus 1 extra space to each for the \0 value at the en of the string
 */
new_dog->name = malloc((len_1 + 1) * sizeof(char));
new_dog->owner = malloc((len_2 + 1) * sizeof(char));
if (new_dog->name == NULL || new_dog->owner == NULL)
{
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (NULL);
}
/*
 * so basically we do follow the malloc logical intructions
 * we do have to check if the allocation of memory was done
 * right so we check
 * if they are NULL byte free
 *
 * Once the memory is allocated correctly we have to start
 * copying the new variables
 * to new_dog with a for loop
 */
for (c = 0; c < len_1; c++)
new_dog->name[c] = name[c];
new_dog->name[c] = '\0';
new_dog->age = age;
for (c = 0; c < len_2; c++)
new_dog->owner[c] = owner[c];
new_dog->owner[c] = '\0';
return (new_dog);
}

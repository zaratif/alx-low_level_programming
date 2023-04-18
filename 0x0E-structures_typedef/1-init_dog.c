#include <stdlib.h>
#include "dog.h"

/**
 * init_pet - initializes a variable of type struct pet
 * @p: pointer to struct pet to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_pet(struct pet *p, char *name, float age, char *owner)
{
	if (p == NULL)
		p = malloc(sizeof(struct pet));
	p->name = name;
	p->age = age;
	p->owner = owner;
}

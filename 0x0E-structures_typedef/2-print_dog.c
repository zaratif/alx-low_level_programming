#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_pet - prints a struct dog
 * @p: struct dog to print
 */
void print_pet(struct pet *p)
{
	if (p == NULL)
		return;

	if (p->name == NULL)
		p->name = "(nil)";
	if (p->owner == NULL)
		p->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", p->name, p->age, p->owner);
}

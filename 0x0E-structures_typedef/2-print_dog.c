#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints all the data of a dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struc dog * d)
{
	if (d != NULL)
	{
		printf("Name : %s\n", (d->name : "(nil)");
		printf("Age : %f\n", (d->age : 0);
		printf("Owner : %s\n", (d->owner : "(nil)");
	}
}

#include "dog.h"
#include <stdlib.h>
/**
 *newdoginfo - reserving memory to new dog info
 *@dog: info
 *Return: new memory allocation
 */
char *newdoginfo(char *dog)
{
	char *hidog;
	int a, b;

	if (dog == NULL)
		return (NULL);

	for (a = 0; *(dog + a) != '\0'; a++)
	{
	}

	hidog = malloc(sizeof(char) * a + 1);

	if (hidog == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		*(hidog + b) = *(dog + b);
	return (hidog);
}


/**
 *new_dog - create a new dog
 *@name: dog name
 *@age: the age...
 *@owner: owner...
 *Return: NULL or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dobi;
	char *newname, *newowner;

	newname = newdoginfo(name);
	if (newname == NULL)
	{
		return (NULL);
		free(newname);
	}
	newowner = newdoginfo(owner);
	if (newowner == NULL)
	{
		return (NULL);
		free(newowner);
	}

	dobi = malloc(sizeof(dog_t));
	if (dobi == NULL)
	{
		return (NULL);
		free(newname);
		free(newowner);
	}

	dobi->name = newname;
	dobi->age = age;
	dobi->owner = newowner;
	return (dobi);
}

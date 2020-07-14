#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 *struct dog - struct with dog information
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

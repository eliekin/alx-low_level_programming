#ifndef DOG
#define DOG
/**
* struct dog - Define a new type struct dog
* @name: char
* @age: float
* @owner: char
* Description: Define a new type struct dog
* with the following name, age, owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typdef struct dog dog_t;
#endif

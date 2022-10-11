#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog details
 * @name: 1st data point
 * @age: 2nd data point
 * @owner: 3rd data point
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

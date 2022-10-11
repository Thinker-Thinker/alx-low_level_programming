#ifndef _DOG_H_

#define _DOG_H_



/**
* struct dog - information about dogs
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

int _putchar(char);

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);
#endif /* _DOG_H_ */
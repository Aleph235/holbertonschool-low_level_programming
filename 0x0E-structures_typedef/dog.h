#ifndef DOG
#define DOG

/**
 * struct dog - dog attributes
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: dog's name age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Dog attributes
 * @name: The name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struc dog.
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
#endif

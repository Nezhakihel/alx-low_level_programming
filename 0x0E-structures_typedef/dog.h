#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Struct dog function
 * @name: name as a variable as char type
 * @age: age as a variable astype float
 * @owner: owner as a variable of char type
 * Description: A struct dog function
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif

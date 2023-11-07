#include <stdlib.h>
#include "dog.h"

/**
  * struct dog - Pomeranian
  * @name: Richie.
  * @age: two.
  * @owner: Jess.
  *
  * Description: A white pomeranian.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

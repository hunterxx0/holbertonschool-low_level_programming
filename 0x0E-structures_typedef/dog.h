#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
/**
 * struct dog - strct.
 *
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* HOLBERTON_H */

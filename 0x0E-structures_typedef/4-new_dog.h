#ifndef NEW_DOG_H
#define NEW_DOG_H

#include <stdlib.h>

/**
 * struct dog - Represents a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
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

/**
 * _strlen - Returns the length of a string
 * @s: String to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *s);

/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: Pointer to the buffer in which we copy the string
 * @src: String to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner);

#endif /* NEW_DOG_H */


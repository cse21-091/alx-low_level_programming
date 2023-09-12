#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog structure (Success), NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int name_len, owner_len;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    name_len = 0;
    owner_len = 0;

    while (name[name_len] != '\0')
        name_len++;

    while (owner[owner_len] != '\0')
        owner_len++;

    dog->name = malloc(sizeof(char) * (name_len + 1));
    dog->owner = malloc(sizeof(char) * (owner_len + 1));

    if (dog->name == NULL || dog->owner == NULL)
    {
        free(dog->name);
        free(dog->owner);
        free(dog);
        return (NULL);
    }

    for (int i = 0; i <= name_len; i++)
        dog->name[i] = name[i];

    for (int i = 0; i <= owner_len; i++)
        dog->owner[i] = owner[i];

    dog->age = age;

    return (dog);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog == NULL)
    {
        printf("Failed to create a new dog.\n");
        return (1);
    }

    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}


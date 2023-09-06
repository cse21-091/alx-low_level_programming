#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments with newline characters.
 * @ac: Argument count.
 * @av: Argument holder.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    int i, j, k, length;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Find length of vector + '\0' which makes it a 2D array */
    length = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            length++;
        length++;
    }

    str = malloc(length + 1); /* Allocate memory for the concatenated string */
    if (str == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n'; /* Add newline character between arguments */
        k++;
    }
    str[k] = '\0'; /* Null-terminate the string */

    return (str);
}


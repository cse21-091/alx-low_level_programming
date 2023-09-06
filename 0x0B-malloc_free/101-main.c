#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
    int i, j, k, words;
    char **array;

    if (str == NULL || *str == '\0')
        return (NULL);

    words = 0;
    for (i = 0; str[i];)
    {
        if (str[i] != ' ')
        {
            words++;
            while (str[i] && str[i] != ' ')
                i++;
        }
        else
            i++;
    }

    if (words == 0)
        return (NULL);

    array = malloc((words + 1) * sizeof(char *));
    if (array == NULL)
        return (NULL);

    for (i = 0, k = 0; i < words; k++)
    {
        while (str[k] == ' ')
            k++;

        for (j = k; str[k] && str[k] != ' '; k++)
            ;

        array[i] = malloc((k - j + 1) * sizeof(char));
        if (array[i] == NULL)
        {
            for (i--; i >= 0; i--)
                free(array[i]);
            free(array);
            return (NULL);
        }

        for (j = 0; str[k] && str[k] != ' '; j++, k++)
            array[i][j] = str[k];

        array[i][j] = '\0';
        i++;
    }

    array[i] = NULL;
    return (array);
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
    char **tab;
    int i;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }

    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s\n", tab[i]);
        free(tab[i]);
    }
    free(tab);

    return (0);
}


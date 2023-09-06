#include <stdlib.h>

/**
 * wordcount - Get word count from a string without spaces.
 *
 * @str: String to count words in.
 *
 * Return: The number of words.
 */
int wordcount(char *str)
{
    int words = 0;

    while (*str != '\0')
    {
        /* Skip spaces */
        if (*str == ' ')
            str++;
        else
        {
            /* Count words */
            while (*str != ' ' && *str != '\0')
                str++;
            words++;
        }
    }
    return words;
}

/**
 * free_array - Free arr[i].
 *
 * @ar: Array to free.
 * @i: Index to start freeing from.
 *
 * Return: Nothing.
 */
void free_array(char **ar, int i)
{
    if (ar != NULL && i != 0)
    {
        while (i >= 0)
        {
            free(ar[i]);
            i--;
        }
        free(ar);
    }
}

/**
 * strtow - Split a string into words.
 *
 * @str: String to split.
 *
 * Return: NULL if it fails.
 */
char **strtow(char *str)
{
    int i, s, j, str_l, word;
    char **string;

    if (str == NULL || *str == '\0')
        return NULL;

    str_l = wordcount(str);
    /* Return NULL if str_l == 0 or new == NULL */
    string = malloc((str_l + 1) * sizeof(char *));
    if (str_l == 0 || string == NULL)
        return NULL;

    for (i = s = 0; i < str_l; i++)
    {
        for (word = s; str[word] != '\0'; word++)
        {
            if (str[word] == ' ')
                s++;

            if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
            {
                string[i] = malloc((word - s + 2) * sizeof(char));
                if (string[i] == NULL)
                {
                    free_array(string, i);
                    return NULL;
                }
                break;
            }
        }

        for (j = 0; s <= word; s++, j++)
            string[i][j] = str[s];
        string[i][j] = '\0';
    }
    string[i] = NULL;
    return string;
}


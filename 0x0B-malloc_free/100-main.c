#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @ac: Argument count.
 * @av: Array of argument strings.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        perror("Error");
        return (1);
    }

    printf("%s", s);
    free(s);

    return (0);
}


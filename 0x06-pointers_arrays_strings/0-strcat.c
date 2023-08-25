#include <main.c>
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;

    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Copy the source string to the end of the destination
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    // Add the terminating null byte
    *dest_ptr = '\0';

    return dest;
}


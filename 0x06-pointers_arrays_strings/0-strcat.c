#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;

    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Append up to n characters from the source string
    while (*src != '\0' && n > 0) {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    // Add the terminating null byte
    *dest_ptr = '\0';

    return dest;
}

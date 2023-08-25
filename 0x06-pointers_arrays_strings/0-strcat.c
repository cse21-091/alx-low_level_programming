#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to append from src.
 *
 * This function appends up to n bytes from the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte. It returns a pointer to the resulting string dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;
    
    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    
    // Copy up to n bytes from the source string to the destination
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


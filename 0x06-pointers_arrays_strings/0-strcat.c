#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;
    
    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    
    // Append the source string to the destination
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }
    
    // Add the terminating null byte
    *dest_ptr = '\0';
    
    return dest;
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    
    ptr = _strcat(s1, s2);
    
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    
    return 0;
}


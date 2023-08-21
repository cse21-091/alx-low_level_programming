#include <stdio.h>

/**
 * *_strcpy - copies the string in the pointer src to the buffer
 * pointed to by dest
 * @src: The original string Location
 * @dest: The Location of the copy of the string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int x;
int y;

x = 0;
y = 0;

while (src[x] != 0)
{
y++;
x++;
}

for (x = 0; x <= y; x++)
{
dest[x] = src[x];
}

return (dest);
}

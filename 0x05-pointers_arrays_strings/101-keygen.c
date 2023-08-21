#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a passord for crackme file
 * Return: 0
 */

int main(void)
{
int i;

char password[100];
srand(time(0));
	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 94 + 33;
	}
printf("%s\n", password);
return (0);
}

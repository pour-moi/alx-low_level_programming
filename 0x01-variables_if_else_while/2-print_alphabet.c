#include <stdio.h>

/**
 * 
 *main - Entry point 
 * 
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;
	int z = 122;

	for(int i = a; i <= z; i++)
	{
		printf("%c", (char)i);
	}

	return (0);
}

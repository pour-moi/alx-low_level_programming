#include "main.h"

/**
 * _strlen - check the code
 *@s: pointer to pass
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		count++;
		s++;
	}

	return (count);
}

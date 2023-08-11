#include <stdlib.h>

/**
* create_array - creats array and assign it with unique char
*
* @size: size of the array
* @c: character
*
* Return: Always 0
*/

char *create_array(unsigned int size, char c)
{
	char *Array;
	unsigned int i;

	Array = malloc(size * c);
	if (size == 0)
	{
		return (NULL);
	}

	if (Array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		Array[i] = c;
	}

	return (Array);
}


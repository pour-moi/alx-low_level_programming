#include "main.h"

/**
 * _isupper - checks if it is capital letter
 * @c: integer to pass
 *
 * Return: 0
*/

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}

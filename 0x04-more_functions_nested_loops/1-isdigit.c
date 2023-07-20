#include "main.h"

/**
 * _isdigit - checks if it is capital letter
 * @c: integer to pass
 *
 * Return: 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}

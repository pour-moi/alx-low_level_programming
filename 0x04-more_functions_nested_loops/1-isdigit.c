#include "main.h"

/**
 * _isupper - checks if it is capital letter
 * @c: integer to pass
 *
 * Return: 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}

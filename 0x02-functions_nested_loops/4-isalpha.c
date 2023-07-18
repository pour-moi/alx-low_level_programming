#include "main.h"

/**
 * _isalpha - checks of it is a letter
 * @c: integer to add
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
        for (j = 'A'; j <= 'Z'; j++)
		{
			if ((char)c == i || (char)c == j)
			return (1);
		}
		
	}
	return (0);
}

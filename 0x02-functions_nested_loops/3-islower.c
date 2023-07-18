#include "main.h"

/**
 * _islower - returns 1 if it is lower case returns 0 if it is uppercase
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if((char)c == i)
			return (1);
	}
	return(0);
}

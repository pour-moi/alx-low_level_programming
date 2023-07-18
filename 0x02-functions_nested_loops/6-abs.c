#include "main.h"

/**
 * _abs - absolute value of numebrs
 * @x: integer to add
 *
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x > 0)
		return (x);

	return (0);
}

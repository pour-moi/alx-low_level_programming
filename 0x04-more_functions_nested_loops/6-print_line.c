#include "main.h"

/**
 * print_line - prints number from 0 -14 10 times
 * @n:integer to pass
 *
 * Return: 0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');

}

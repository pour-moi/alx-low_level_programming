#include "main.h"

/**
 * puts2 - prints everyother character
 *@str: pointer to pass
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

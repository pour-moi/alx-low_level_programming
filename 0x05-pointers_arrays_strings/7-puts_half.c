#include "main.h"

/**
 * puts_half - prints everyother character
 *@str: pointer to pass
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int size = 0;
	int i;
	int half_size;

	while (str[size] != '\0')
	{
		size++;
	}
	half_size = size / 2;

	if (size % 3 == 0)
	{
		half_size = (size - 1) / 2
	}
	
	for (i = half_size; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
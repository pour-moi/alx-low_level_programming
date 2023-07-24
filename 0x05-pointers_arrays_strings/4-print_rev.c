#include "main.h"

/**
 * print_rev - reverses string
 *@s: pointer to pass
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int size = 0;
	int i;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	for (i = size; i >= 0; i--, s--)
	{
		_putchar(*s);
	}

}

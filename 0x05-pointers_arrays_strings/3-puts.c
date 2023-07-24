#include "main.h"

/**
 * _puts - prints out string
 *@str: pointer to pass
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++, str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}

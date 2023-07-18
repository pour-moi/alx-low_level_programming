#include "main.h"

/**
 * print_last_digit - prints last digit of numbers
 * @x: integer to add
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (x < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}


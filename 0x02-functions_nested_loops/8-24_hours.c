#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - hours
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, j, k, l;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 6; k++)
		{
			for (l = 0; l < 10; l++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
				if (i == 2 && j == 3 && k == 5 && l == 9)
					exit(1);
			}
		}
	}

}

}


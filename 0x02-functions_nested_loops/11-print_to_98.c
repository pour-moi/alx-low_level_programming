#include "main.h"
#include <stdio.h>

/**
 * add - adds two numbers
 *@n: integer to be added
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

if (n > 99)
{
	for (i = n; i > 97; i--)
	{
		if (i == 98)
		{
			printf("%d",i);
			break;
		}
			printf("%d, ",i);  
		}
	}

	for (i = n; i < 99; i++)
	{
		if (i == 98)
		{
			printf("%d",i);
			break;
		}
		printf("%d, ",i);
	}
	printf("\n");
}


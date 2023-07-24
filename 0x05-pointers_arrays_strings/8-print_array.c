#include "main.h"
#include <stdio.h>

/**
 * print_array - prints everyother character
 *@a: pointer to pass
 *@n: integer to pass
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d",a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}

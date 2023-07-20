#include <stdio.h>

/**
 * main - prints fizz for multiple of 3 prints buzz
 * for multiplt of 5 prints
 * fizz buzz which are multiples of both
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

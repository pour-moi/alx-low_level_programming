#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 *main -Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{

	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (lastnum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	else if (lastnum == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lastnum < 6 && lastnum != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);

	return (0);
}

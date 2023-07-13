#include <stdio.h>

/**
 * main -Entry point
 *
 * Size of datatypes
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{

	int sizeOfInt = sizeof(int);
	int sizeOfChar = sizeof(char);
	int sizeOfLongInt = sizeof(long int);
	int sizeOfLongLongInt = sizeof(long long int);
	int sizeOfFloat = sizeof(float);	

	printf("Size of a char: %d\n",sizeOfChar);
	printf("Size of an int: %d\n",sizeOfInt);
	printf("Size of a long int: %d\n",sizeOfLongInt);
	printf("Size of a long long int: %d\n",sizeOfLongLongInt);
	printf("Size of a float: %d\n",sizeOfFloat);

	return (0);
}

#include <stdio.h>

/**
 * main - prints command line 
 * @argc: counts
 * @argv: string
 *
 * Return - 0 Always
 * /

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	printf("\n");

	return(0);
}

#include <stdio.h>

/**
 * main - prints command line 
 *
 * @argc: counts
 * @argv: string
 * /

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	printf("\n");
}

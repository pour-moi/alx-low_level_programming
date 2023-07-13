#include <stdio.h>

/**
 *main -Entry point
 *
 *Outputting text using "putchar"
 *
 *Return: Always 1 (Sucess)
 */

int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while(sentence[i] != '\0'){
		putchar(sentence[i]);	
		i++;
	}

	return (1);
}

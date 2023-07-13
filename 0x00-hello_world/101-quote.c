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
	for(int i = 0; sentence[i] != '\0'; i++){
		putchar(sentence[i]);
	}

	return (1);
}

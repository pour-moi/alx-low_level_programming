#include <stdio.h>
#include <unistd.h>

/**
 *main -Entry point
 *
 *Outputting text using "putchar"
 *
 *Return: Always 1 (Sucess)
 */

int main(void)
{
	write(STDOUT_FILENO,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",80);

	return (1);
}

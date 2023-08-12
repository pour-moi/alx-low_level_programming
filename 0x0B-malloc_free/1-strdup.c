#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - counts the length of string
* @word: argument to count
*
* Return: count Success
*/

int _strlen(char *word)
{
	int count = 0;

	for (; *word != '\0'; word++)
	{
		count++;
	}

	return (count);
}

/**
* _strdup - copies passed argument
*
* @str: string to passe
*
* Return: Copy Success
*/

char *_strdup(char *str)
{
	char *Copy;
	int leng = _strlen(str);
	int i;

	if (str == NULL)
		return (NULL);

	Copy = malloc(leng * sizeof(char) + 1);

	for (i = 0; i < leng; i++)
	{
		Copy[i] = str[i];
	}

	return (Copy);
}

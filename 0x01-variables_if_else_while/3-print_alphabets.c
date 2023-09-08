#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int i, j;

	letter = 'a';
	for (i = letter; i <= 'z'; i++)
	{
		putchar(i);
	}

	letter = 'A';
	for (j = letter; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}

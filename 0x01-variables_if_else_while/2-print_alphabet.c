#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char letter;

	letter = 'a';
	for (i = letter; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

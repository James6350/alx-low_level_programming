#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

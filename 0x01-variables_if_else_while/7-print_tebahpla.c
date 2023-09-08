#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*decleration*/
	char letter;
	int n;
	/*The loop to print in reverse*/
	letter = 'z';
	for (n = letter; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

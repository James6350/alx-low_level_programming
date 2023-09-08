#include <stdio.h>

/**
 * main - Prints the alphabet exept q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Here is the declerations*/
	char letter;

	/*Assignments*/
	letter = 'a';
	
	/*Looping to print alphabets except q and e*/
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}



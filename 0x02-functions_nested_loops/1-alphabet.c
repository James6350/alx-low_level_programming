#include "main.h"

/**
 * print_alphabet - a prototype to print alphabets in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char letter;

	letter = 'a';
	for (i = letter; i <= 'z'; i++)
	{
		_putchar(i);
	}
	/*This prints a new line*/
	_putchar('\n');
}

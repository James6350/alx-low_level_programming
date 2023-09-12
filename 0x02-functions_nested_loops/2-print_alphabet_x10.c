#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char letter;
	
	i=0;
	while (i < 10)
	{
		letter = 'a';
		/*print the alphabets*/
		for (j = letter; j <= 'z'; j++)
		{
			_putchar(j);
		}
		/*print a new line*/
		_putchar('\n');
		i++;
	}
}


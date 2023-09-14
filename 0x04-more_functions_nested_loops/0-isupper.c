#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase.
 *
 * @c: letter entered.
 *
 * Return: returns either 1 0r 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabetx10(void)
{
	char i;
	char j;

	for (j = 0; j <= 10; j++)
	{ 
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

	return (0);
}

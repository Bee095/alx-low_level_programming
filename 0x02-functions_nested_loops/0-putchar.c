#include <unistd.h>
#include "main.h"

/**
 * main - Check description.
 * Description - Prints the word _putchar followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char word[8] = _putchar;
	int i;

	for (i = 0, i < 8, i++);
	{
		_putchar(word[i]);
	}
	putchar('\n');
	
	return (0);
}	


#include <stdio.h>
/**
 *main - Prints out alphabet.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i=0 ; i<52; i++)
	{
		putchar (alp[i]);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - testing lowercase alphabet.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

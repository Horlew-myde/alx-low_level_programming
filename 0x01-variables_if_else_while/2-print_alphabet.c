#include <stdio.h>
/**
 * main - testing lowercase alphabet.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	while  (alpha <= 'z')
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

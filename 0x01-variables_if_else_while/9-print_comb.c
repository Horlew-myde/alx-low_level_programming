#include <stdio.h>

/**
 * main - char number combo
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';

	while (x < 10)
	{
		putchar(x);
		if (x != '10')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - char number combo
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = '0';

	while (x < '10')
	{
		putchar(x);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

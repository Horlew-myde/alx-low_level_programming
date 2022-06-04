#include <stdio.h>

/**
 * main - char number combo
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x= '0'; x < '10'; x++ )
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

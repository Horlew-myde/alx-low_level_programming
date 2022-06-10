#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, t;

	n = 612852475143;
	for (t = 2; t <= n; t++)
	{
	if (n % t == 0)
	{
	n /= t;
	t--;
	}
	}
	printf("%ld\n", t);
	return (0);
}

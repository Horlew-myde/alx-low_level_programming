#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	long int a, b, d;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 48; c++)
	{
		d = a + b;
		printf(", %ld", d);
		a = b;
		a = d;
	}
	printf("\n");
	return (0);
}

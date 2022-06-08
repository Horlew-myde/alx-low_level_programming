#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long a =0, b = 1, d;

	for (d = 0; d < 50; d++)
	{
		d = a + b;
		printf("%lu", d);

		a = b;
		b = d;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

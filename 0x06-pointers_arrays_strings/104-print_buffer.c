#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer.
 * @size: buffer size.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
int a, p, g;

if (size <= 0)
	printf("\n");
else
{
	for (a = 0; a < size; a += 10)
	{
		printf("%.8x:", a);
		for (p = a; p < a + 10; p++)
		{
			if (p % 2 == 0)
				printf(" ");
			if (p < size)
				printf("%.2x", *(b + p));
			else
				printf("  ");
		}
		printf(" ");
		for (g = a; g < a + 10; g++)
		{
			if (g >= size)
				break;
			if (*(b + g) < 32 || *(b + g) > 126)
				printf("%c", '.');
			else
				printf("%c", *(b + g));
		}
		printf("\n");
	}
}
}

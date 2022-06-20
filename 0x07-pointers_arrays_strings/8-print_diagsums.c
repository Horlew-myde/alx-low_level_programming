#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square 
 * matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, 1sum = 0, 2sum = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			1sum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			2sum += *(a + i);
	}
	printf("%d, %d\n", 1sum, 2sum);
}

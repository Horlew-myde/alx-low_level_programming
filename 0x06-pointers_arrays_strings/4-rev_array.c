#include "main.h"

/**
 * reverse_array - reverse content in an array of integer.
 * @a: array.
 * @n: number of integer in array.
 * Return : nothing
 */

void reverse_array(int *a, int n)
{

int temp, begin = 0;
int end = n - 1;
while (begin < end)
{
	temp = *(a + begin);
	*(a + begin) = *(a + end);
	*(a + end) = temp;
	begin++, end--;
}
}

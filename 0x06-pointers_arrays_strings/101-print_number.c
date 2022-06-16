#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
unsigned int num, digit, range;

if (n < 0)
{
	_putchar(45);
	num = n * -1;
}
else
{
	num = n;
}

digit = num;
range = 1;

while (digit > 9)
{
	digit /= 10;
	range *= 10;
}

for (; range >= 1; range /= 10)
{
	_putchar(((num / range) % 10) + 48);
}
}

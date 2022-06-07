#include "main.h"
/**
 * print_sign - Determines if the input number </>/= zero.
 *
 * The input number as an integer.
 *
 * Return: 1 for alphaber. 0 for the rest  Always (SUCCESS)
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

/*using ASCII valuse in the code above*/
	_putchar('\n');

}

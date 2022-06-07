#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *
 * input (i) = integer.
 *
 * Return: absolute value 0 for the rest  Always (SUCCESS)
 *
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
/*using ASCII valuse in the code above*/
	_putchar('\n');

}

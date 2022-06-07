#include "main.h"
/**
 * _abs  - computes absolutte value of an integer
 *
 * The input number as an integer.
 * @i: input shold be an integer
 * Return: absokute value  Always (SUCCESS)
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

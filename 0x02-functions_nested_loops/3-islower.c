#include "main.h"
/**
 * _islower - shows if input is a lowercase
 *
 * Return: 1 ffor lowercase. 0 for the rest  Always (SUCCESS)
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <+ 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

/*using ASCII valuse in the code above*/
	_putchar('\n');

}

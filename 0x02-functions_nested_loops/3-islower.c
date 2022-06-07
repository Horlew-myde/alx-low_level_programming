#include "main.h"
/**
 * _islower - shows if input is a lowercase
 *
 * Return: 1 ffor lowercase. 0 for the rest  Always (SUCCESS)
 *
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}

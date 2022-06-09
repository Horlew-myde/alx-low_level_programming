#include "main.h"

/**
 * _isdigit - checks if input c  is a num btw 0-9
 * @c: input number.
 * Return: 1 if a num (0 to 9),else  0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

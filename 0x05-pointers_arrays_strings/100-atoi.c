#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: integer value of converted string.
 */
int _atoi(char *s)
{
int mide = 1;
unsigned int olu = 0;

do
{
	if (*s == '-')
		mide *= -1;

	else if (*s >= '0' && *s <= '9')
		olu = (olu * 10) + (*s - '0');

	else if (olu > 0)
		break;
} while (*s++);

return (olu * mide);
}

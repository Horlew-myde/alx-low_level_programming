#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int str_rev = 0;

	while (str_rev >= 0)
	{
	if (s[str_rev] == '\0')
		break;
	str_rev++;
	}

	for (str_rev--; str_rev >= 0; str_rev--)
		_putchar(s[str_rev]);
	_putchar('\n');
}

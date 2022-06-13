#include "main.h"

/**
 * print_rev - prints a reverse string.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int str_rev = 0, a, b;
	char *str, ver;

	while (str_rev >= 0)
	{
	if (s[str_rev] == '\0')
		break;
	str_rev++;
	}
	str = s;

	for (a = 0; a < (str_rev - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			ver = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = ver;
		}
	}
}

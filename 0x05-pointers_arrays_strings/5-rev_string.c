#include "main.h"

/**
 * rev_string - reverse string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int str_rev = 0, a, b;
	char *str, temp;

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
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
		}
	}
}

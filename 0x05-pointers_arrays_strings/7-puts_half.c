#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
int string = 0, i;

while (string >= 0)
{
	if (str[string] == '\0')
		break;
	string++;
}

if (string % 2 == 1)
	i = string / 2;
else
	i = (string - 1) / 2;

for (i++; i < string; i++)
	_putchar(str[i]);
_putchar('\n');
}

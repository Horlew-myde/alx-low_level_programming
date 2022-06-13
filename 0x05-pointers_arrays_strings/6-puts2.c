#include "main.h"

/**
 * puts2 - rints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
int str_xter = 0;

while (str_xter >= 0)
{
	if (str[str_xter] == '\0')
	{
		_putchar('\n');
		break;
	}
	if (str_xter % 2 == 0)
		_putchar(str[str_xter]);
	count++;
}
}

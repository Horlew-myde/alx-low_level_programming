#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
int string_count = 0;

while (string_count >= 0)
{
	if (str[string_count] == '\0')
	{
	_putchar('\n');
	break;
	}
	_putchar(str[string_count]);
	string_count++;
}
}

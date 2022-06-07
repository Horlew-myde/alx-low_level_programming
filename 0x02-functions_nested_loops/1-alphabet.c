#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar thrn a new line
 *
 * Return:0  Always (SUCCESS)
 *
 */
void print_alphabet(void)
{
	int i;
	for (i =97; i <= 122; i++)
	{
		_putchar(i);
	}
/*using ASCII valuse in the code above*/
	putchar('\n');

	return (0);
}

#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 *
 * Return:0  Always (SUCCESS)
 *
 */
void print_alphabet(void)
{
	int i;
	for (i =97; i <= 122; i++)
	{
		putchar(i);
	}
/*using ASCII valuse in the code above*/
	putchar('\n');

}

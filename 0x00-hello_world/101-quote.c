#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Kopar, 2015-10-19\n";

	write(2, string, 59);
	return (1);
}

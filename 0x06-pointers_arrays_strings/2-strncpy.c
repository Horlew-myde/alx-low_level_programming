#include "main.h"
/**
 * *_strncpy - string copycat
 * @dest: destination.
 * @src: source.
 * @n: bytes amount from src.
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; str < n && src[i] != '\0'; str++)
		dest[i] = src[i];
	for ( ; str < n; str++)
		dest[i] = '\0';

	return (dest);
}

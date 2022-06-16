#include "main.h"

/**
 * _strncpy - string copycat
 * @dest: destination.
 * @src: source.
 * @n: bytes amount from src.
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; str < n && src[str] != '\0'; str++)
		dest[str] = src[str];
	for ( ; str < n; str++)
		dest[str] = '\0';

	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte(\0)
 * to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int olumide = 0;

while (olumide >= 0)
{
	*(dest + olumide) = *(src + olumide);
	if (*(src + olumide) == '\0')
		break;
	olumide++;
}
return (dest);
}

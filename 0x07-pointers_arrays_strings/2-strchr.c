#include "main.h"
/**
 * _strchr - reads and returns first occurence of a character c
 *  in a string S,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}

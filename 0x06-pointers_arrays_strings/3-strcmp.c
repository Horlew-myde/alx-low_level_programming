#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int str1 = 0, str2 = 0;

	while (str2 == 0)
	{
		if ((*(s1 + str1) == '\0') && (*(s2 + str1) == '\0'))
			break;
		str2 = *(s1 + str1) - *(s2 + str2);
		str1++;
	}

	return (str2);
}

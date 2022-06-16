#include "main.h"


/**
 * *_strcat - concatenates 2 strings.
 * @dest: destination.
 * @src: source.
 * Return: dest pointer.
 */
char *_strncat(char *dest, char *src)
{
	int str1 = 0, str2 = 0;

	while (dest + str1) != '\0'
	{
		str1++;
	}

	while (str2 >= 0)
	{
		(dest + str1) = (src + str2);
		if (src + str2) == '\0'
			break;
		str1++;
		str2++;
	}
	return (dest);
}

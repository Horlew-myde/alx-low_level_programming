#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int s1length, s2length, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1length = 0; s1[s1length] != '\0'; s1length++)
		;

	for (s2length = 0; s2[s2length] != '\0'; s2length++)
		;

	if (n > s2length)
		n = s2length;

	lsout = s1length + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < s1length)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - s1length];

	sout[i] = '\0';

	return (sout);
}

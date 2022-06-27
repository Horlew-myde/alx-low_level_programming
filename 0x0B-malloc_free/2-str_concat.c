#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings.
 * @s1: string a.
 * @s2: string b.
 *
 * Return: pointer of an array of char
 */
char *str_concat(char *s1, char *s2)
{
	char *stroutput;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	stroutput = malloc(sizeof(char) * (a + b + 1));

	if (stroutput == NULL)
	{
		free(stroutput);
		return (NULL);
	}

	for (c = 0; c < i; c++)
		stroutput[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
		stroutput[c] = s2[b];

	return (stroutput);
}

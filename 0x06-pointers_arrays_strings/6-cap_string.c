#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
int word = 0, i;
int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(s + word) >= 97 && *(s + word) <= 122)
	*(s + word) = *(s + word) - 32;
word++;
while (*(s + word) != '\0')
{
	for (i = 0; i < 13; i++)
	{
		if (*(s + word) == sep_words[i])
		{
			if ((*(s + (word + 1)) >= 97) && (*(s + (word + 1)) <= 122))
				*(s + (word + 1)) = *(s + (word + 1)) - 32;
			break;
		}
	}
	word++;
}
return (s);
}

#include <main.h>

/**
 * _strchr -Entry point
 *
 * @s: input string
 *
 * @c: input character to find it
 *
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
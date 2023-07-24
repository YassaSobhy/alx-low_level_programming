#include <main.h>

/**
 * rev_string - function that reverses a string.
 *
 * @s: string to reverse
 * Return: String in reverse
*/

void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

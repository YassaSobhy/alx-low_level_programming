#include <main.h>

/**
 * _strspn -function that gets the length of a prefix substring.
 *
 * @s: input string
 *
 * @accept: input
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (k);
			}
		}
		s++;
	}

	return (n);
}

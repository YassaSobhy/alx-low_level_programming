#include <main.h>

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return:changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

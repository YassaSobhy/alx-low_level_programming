#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 *
 * @str: input
 *
 * Return: print
*/

void puts2(char *str)
{
	int i;
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

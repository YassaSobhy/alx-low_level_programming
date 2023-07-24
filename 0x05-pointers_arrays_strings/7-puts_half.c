#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 * Return: half of input
*/

void puts_half(char *str)
{
	int n = 0;
	int a = 0;
	int longi = 0;

	while (str[a] != '\0')
	{
		longi++;
		a++;
	}
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

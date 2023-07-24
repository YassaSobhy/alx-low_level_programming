#include <stdio.h>
#include <main.h>

/**
 * print_array -prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array to print its elements
 * @n: number of elements of array
 *
 * Return: a and n inputs
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}

	printf("\n");
}

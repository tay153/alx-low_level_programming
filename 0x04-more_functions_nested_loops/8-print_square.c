#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		j = 0;

		while (j < 0)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

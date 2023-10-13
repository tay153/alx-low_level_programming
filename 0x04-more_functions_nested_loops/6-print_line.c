#include "main.h"
/**
 * print_line - draws a straiht line in the terminal
 *@n:  is the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

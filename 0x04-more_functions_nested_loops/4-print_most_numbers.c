#include "main.h"
/**
 *  print_most_numbers - prints the numbers, from 0 to 9
 *  does not print 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	if (i != 49 && i != 51 && i <= 57)
		_putchar("%c", i);
	i++;
	_putchar('\n');
}

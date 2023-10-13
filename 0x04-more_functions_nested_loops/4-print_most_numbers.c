#include "main.h"
/**
 *  print_most_numbers - prints the numbers, from 0 to 9
 *  does not print 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	if (i != '2' && i != '4' && i <= '9')
		_putchar(i);
	i++;
	_putchar('\n');
}

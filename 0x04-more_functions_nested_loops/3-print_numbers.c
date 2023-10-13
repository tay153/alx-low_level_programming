#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int i = 48;

	if (i >= 48 && i < 58)
	{
		printf("%c", i);
		i++;
	}
	_putchar('\n');
}

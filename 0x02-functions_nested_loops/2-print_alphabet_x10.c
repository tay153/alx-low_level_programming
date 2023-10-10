#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
	}
	putchar('\n');
}

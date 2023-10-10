#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
	i++;
}

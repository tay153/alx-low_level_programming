#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0(success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}

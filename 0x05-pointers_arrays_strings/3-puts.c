#include "main.h"
/**
 * _puts - prints a strin to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

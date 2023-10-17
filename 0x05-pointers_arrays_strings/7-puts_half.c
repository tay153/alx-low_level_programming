#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:the string
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
		str++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	for (; j < i; i++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

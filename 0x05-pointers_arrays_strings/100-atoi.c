#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the sting to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ui = 0;
	int min = 1;
	int j = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			ui = (ui * 10) + (s[i] - '0');
			i++;
		}
		if (j == 1)
		{
			break;
		}
		i++;
	}
	ui *= min;
	return (ui);
}

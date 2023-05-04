#include <stdio.h>
#include "main.h"
/**
 * puts2 - print one out of two characters
 * @str: Input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}

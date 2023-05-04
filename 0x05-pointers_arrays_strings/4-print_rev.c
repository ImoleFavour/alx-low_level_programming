#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int j;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (j = longi; j > 0; j--)
	{
		putchar(*s);
		s--;
	}
	putchar ('\n');
}

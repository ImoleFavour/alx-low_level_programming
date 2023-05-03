#include "main.h"
/**
 * _puts - prints a str, followed by newline, to stdout
 * @str: string to print
 * Return: _putchar
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

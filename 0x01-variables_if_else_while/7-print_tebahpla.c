#include <stdio.h>
/**
 *main - Entry point
 *Description: Lowercase alphabet in reverse
 *Return: Always o (success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

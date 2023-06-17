#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 *
 * @b: string that accepts binary number
 *
 * Return: The unsigned int after binary conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int base_ten = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		base_ten = 2 * base_ten + (b[n] - 0);
	}
	return (base_ten);
}

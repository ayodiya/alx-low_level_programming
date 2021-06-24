#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - return  0-9 skips 2 and 4
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

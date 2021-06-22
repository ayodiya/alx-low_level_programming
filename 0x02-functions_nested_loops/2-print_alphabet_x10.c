#include "holberton.h"

/**
 * main - print Holberton
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num, i;
	for (num = 0; num <= 10; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}

}

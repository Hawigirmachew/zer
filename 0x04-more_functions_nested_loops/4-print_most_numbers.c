#include "main.h"
/**
 * print_most_numbers - print numbers without 4 and 2
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}

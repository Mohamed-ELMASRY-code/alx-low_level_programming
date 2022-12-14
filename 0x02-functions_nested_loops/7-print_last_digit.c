#include "main.h"
/**
 * print_last_digit - The entry point of the function
 * @n: The number to be checked
 *
 * Return: last_digt
 */
int print_last_digit(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}

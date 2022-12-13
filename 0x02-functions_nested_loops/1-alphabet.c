#include "main.h"
/**
 * print_alphabet - The entry point of the function
 * @void: The function takes no parameters
 */
void print_alphabet(void)
{
	char lowercase_alpha = 'a';

	while (lowercase_alpha <= 'z')
	{
		_putchar(lowercase_alpha);
		lowercase_alpha++;
	}
	_putchar('\n');
}

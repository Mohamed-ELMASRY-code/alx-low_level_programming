#include "main.h"
/**
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

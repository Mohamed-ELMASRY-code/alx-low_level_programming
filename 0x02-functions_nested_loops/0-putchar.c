#include <unistd.h>
#include "main.h"
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int letter_index = 0;

	while (letter_index < 8)
	{
		_putchar(word[letter_index]);
		letter_index++;
	}
	_putchar('\n');
	return (0);
}

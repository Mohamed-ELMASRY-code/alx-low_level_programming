#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char reverse_sub_alpha = 'z';

	while (reverse_sub_alpha >= 'a')
	{
		putchar(reverse_sub_alpha);
		reverse_sub_alpha--;
	}
	putchar('\n');
	return (0);
}

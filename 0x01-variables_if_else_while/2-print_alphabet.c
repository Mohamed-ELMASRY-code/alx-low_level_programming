#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');
	return (0);
}

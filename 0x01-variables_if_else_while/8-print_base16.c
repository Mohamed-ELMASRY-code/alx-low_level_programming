#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char hex_num = 48;
	char hex_alpha = 'a';

	while (hex_num <= 57)
	{
		putchar(hex_num);
		hex_num++;
	}
	while (hex_alpha <= 'f')
	{
		putchar(hex_alpha);
		hex_alpha++;
	}
	putchar('\n');
	return (0);
}


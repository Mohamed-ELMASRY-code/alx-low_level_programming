#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char sub_alpha = 'a';
	char sup_alpha = 'A';

	while (sub_alpha <= 'z')
	{
		putchar(sub_alpha);
		sub_alpha++;
	}
	while (sup_alpha <= 'Z')
	{
		putchar(sup_alpha);
		sup_alpha++;
	}
	putchar('\n');
	return (0);
}

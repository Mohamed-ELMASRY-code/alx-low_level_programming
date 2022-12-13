#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char not_complete = 'a';

	while (not_complete <= 'z')
	{
		if (not_complete != 'e' && not_complete != 'q')
			putchar(not_complete);
		not_complete++;
	}
	putchar('\n');
	return (0);
}

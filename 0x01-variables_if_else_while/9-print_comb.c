#include <stdio.h>
/**
 *  main - The entry point of C programs
 *  Return: 0
 */
int main(void)
{
	int single_nums = 48;

	while (single_nums <= 57)
	{
		putchar(single_nums);
		if (single_nums != 57)
		{
			putchar(',');
			putchar(' ');
		}
		single_nums++;
	}
	putchar('\n');
	return (0);
}

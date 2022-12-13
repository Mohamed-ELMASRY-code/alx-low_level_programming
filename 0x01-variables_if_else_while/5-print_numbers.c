#include <stdio.h>
/**
 * main - The entry point of C programs
 * Return: 0
 */
int main(void)
{
	char decimal_num = 0;

	while (decimal_num < 10)
	{
		printf("%d", decimal_num);
		decimal_num++;
	}
	putchar('\n');
	return (0);
}

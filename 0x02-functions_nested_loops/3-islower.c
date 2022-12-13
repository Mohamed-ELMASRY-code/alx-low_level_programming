#include "main.h"
int _islower(int c)
{
	char lowercase_alpha = 'a';
	int islower_bool = 0;

	while (lowercase_alpha <= 'z')
	{
		if (lowercase_alpha == c)
			islower_bool = 1;
		lowercase_alpha++;
	}
	return (islower_bool);
}

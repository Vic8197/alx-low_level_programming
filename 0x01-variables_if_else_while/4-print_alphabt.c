#include <stdio.h>
/**
 * main - entry point
 * print all lowercase except q and e
 *
 * Return: zero
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	{
		if (x != 'e' || x != 'q')
			putchar(x);
	}
putchar('\n');
return (0);
}

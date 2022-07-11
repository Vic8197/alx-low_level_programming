#include <stdio.h>
/**
 * main - lower case in reverse
 * Return: zzero
 */
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
		putchar(lowcase);
putchar('\n');

return (0);
}

#include <stdio.h>
/**
 * main -entry pt
 * print uppercase and lowercase
 * Return: zero
 */
int main(void)
{
	char q;

	for (q = 'a' ; q = 'z' ; q++)
		putchar(q);
	for (q = 'A' ; q = 'Z' ; q++)
		putchar(q);
putchar('\n');
return (0);
}

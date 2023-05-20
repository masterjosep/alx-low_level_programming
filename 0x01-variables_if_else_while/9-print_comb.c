#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print combination of numbers in asceding order'
 * Return: 0 (on-point)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

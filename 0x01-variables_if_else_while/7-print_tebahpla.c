#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in decending order'
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}

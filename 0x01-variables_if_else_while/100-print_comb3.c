#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'A program that prints all possible different combinations of two digits'
 * Return: 0 (On-point)
 */
int main(void)
{
	int d, p;
	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

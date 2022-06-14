#include "main.h"
/**
 * print_number - prints decimals
 * @n: number in base 10
 * Return: void
 */
void print_number(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
/**
 * print_number_in - prints inverse of number
 * @n: number
 * Return: void
 */
void print_number_in(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
/**
 * prompt - prints out prompt value
 */
void prompt(void)
{
	PRINTER("$ ");
}

#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * _putchar to be used only twice.
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}

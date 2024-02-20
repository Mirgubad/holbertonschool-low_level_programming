#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, co;
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	co = 0;

	while (co < 10)
	{
		_putchar(word);
		co++;
		_putchar('\n');
	}
}

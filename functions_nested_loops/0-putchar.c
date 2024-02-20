#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "__putchar";
	char ch;
	int i;
	
	for (i = 0; i <word.length; i++)
	_putchar(word[i]);

	return (0);
}

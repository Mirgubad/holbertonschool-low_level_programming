#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int length = sizeof(word);
	int i;
	
	for (i = 0; i < length; i++)
		_putchar(word[i]);
	
	return (0);
}

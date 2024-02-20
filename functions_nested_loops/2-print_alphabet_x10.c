#include <main.h>
/**
 * main - Prints "alphabet" 10x
 *
 * Return: Always 0.
 */

int main(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0;i < 10; i++)
		print_alphabet_x10(word);

	return (0);
}

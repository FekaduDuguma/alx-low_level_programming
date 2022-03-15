#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char fike[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(fike[c]);
	}
	_putchar('\n');
	return (0);
}

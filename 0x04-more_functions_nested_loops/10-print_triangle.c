#include "main.h"

/**
 * main- print_triangles prints a triangle
 * use the character #
 */
void print_triangle(int size)
{
	if (size <=0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = size; i >= 1; i--)
		{
			for (j =i; j <=size; j++)
			{
				_putchar(' ');
			}
			for (j =i; j <=size; j++)
			{
				_putchar('#');
			}	
			_putchar('\n');
		}
	}
}

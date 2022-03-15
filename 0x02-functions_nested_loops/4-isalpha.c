#include "main.h"

/**
 * _isalpha - returns 1 if lowercase alphabet and 0 otherwise
 * @c: take in an character
 * Return: 1 for letter or 0 otherwise
 * */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

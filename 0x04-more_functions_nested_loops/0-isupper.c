#include "main.h"

/**
 * main -checks for uppercase character
 * Returns: 1 if uppercase o otherwise
 */
int _isupper(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return(0);
	}
	elseif (c <= 'A' && c >= 'Z')
	{
		return(1);
	}

}

#include "main.h"

/*
 * _isupper  uppercase
 * Description: Prints the alphabet with _putchar
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

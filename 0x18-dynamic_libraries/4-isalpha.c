#include "main.h"
/**
 * _isalpha - checks for alphabetic characte
 *@c: The character to check  lowercase or uppercase
 * Return:  if c is a letter, lowercase or uppercase, 0 if it is otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}

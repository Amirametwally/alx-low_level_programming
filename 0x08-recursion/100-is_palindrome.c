#include "main.h"

int check_is_palindrom(char *s, int i, int j);
int lengthOfString(char *s);
/**
 * is_palindrome - checks if string is a palindrom
 * @s: string to check.
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int count;

	count = 0;
	if (!(*s))
		return (1);

	count = lengthOfString(s);
	return (check_is_palindrom(s, 0, count - 1));
}

/**
 * check_is_palindrom - helper for is_palindrom
 * @s: string to check
 * @i: front index.
 * @j: back index.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_is_palindrom(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	if (s[i] == s[j] && i == j)
		return (1);
	else if (s[i] == s[j] && i > j)
		return (1);
	else
		return (check_is_palindrom(s, i + 1, j - 1));
}

/**
 * lengthOfString - count the string.
 * @s: string to count.
 *
 * Return: Int value of the length.
 */
int lengthOfString(char *s)
{
	if (*s)
		return (lengthOfString((s + 1)) + 1);
	return (0);
}

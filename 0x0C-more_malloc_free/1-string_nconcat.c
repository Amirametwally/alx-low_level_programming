#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, j, s1Length, s2Length;

s1 == NULL ? s1 = "" : s1;
s2 == NULL ? s2 = "" : s2;

for (s1Length = 0; s1[s1Length]; s1Length++)
;
for (s2Length = 0; s2[s2Length]; s2Length++)
;

n >= s2Length ? n = s2Length : n;

result = malloc(sizeof(char) * (s1Length + n + 1));
if (result == NULL)
{
 return (NULL);
}
for (i = 0; i < s1Length; i++)
{
	result[i] = s1[i];
}

for (j = 0; j < n; j++)
{
  result[i + j] = s2[j];
}

 result[i + j] = '\0';
return (result);
}
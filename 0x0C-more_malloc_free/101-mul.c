#include "main.h"
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0
 */
int multiply(char *num1, char *num2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    int i ;
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (!isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }
    }
    int i;
    for ( i = 0; num2[i] != '\0'; i++)
    {
        if (!isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

int multiply(char *num1, char *num2)
{
    int len1 = 0;
    int len2 = 0;

    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    int *res = calloc(len1 + len2, sizeof(int));
    if (res == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    int carry = 0;
    int i ;
    for (i = len1 - 1; i >= 0; i--)
    {
        int n1 = num1[i] - '0';
        
        int j;
        for (j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';

            int sum = (n1 * n2) + res[i + j + 1] + carry;
            carry = sum / 10;
            res[i + j + 1] = sum % 10;
        }

        if (carry > 0)
        {
            res[i] += carry;
            carry = 0;
        }
    }

    int result = 0;
    int idx = 0;

    while (res[idx] == 0 && idx < len1 + len2)
        idx++;

    for (; idx < len1 + len2; idx++)
    {
        result = result * 10 + res[idx];
    }

    free(res);
    return result;
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints name of the function
 * @argc: counts arugments
 * @argv: array of listed commands
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	if (argc == 1)
		printf("0\n");
	for (i = 1; argc > 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result + = num;
	}
	printf("%d\n", result);
	return (0);
}

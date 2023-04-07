#include <stdio.h>
#include "main.h"

/**
 * main - used to print all received arguments
 * @argc: argc parameter
 * @argv: array of listed commands
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

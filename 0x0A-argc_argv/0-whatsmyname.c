#include <stdio.h>
#include "main.h"
/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv: array of listed commands
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}

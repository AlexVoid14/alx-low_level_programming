#include <stdio.h>
/**
 * main - writes a program that prints a number of argumentspaased into it
 * @args: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

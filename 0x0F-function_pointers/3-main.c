#include "3-calc.h"
/**
 * main - checks arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: error if number os arguments is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* checks if there is only one operator */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2][0];
	if (s != '+' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argc[3]);
	res = (get_op_func(argc[2]))(a, b);
	printf("%d\n", res);
	return (0);
}

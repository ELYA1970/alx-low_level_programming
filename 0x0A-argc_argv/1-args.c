#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * @argc: integer
 * @argv: string
 */
int main(int argc, char **argv)
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts the number of arguments
 * @argc: number of arguments
 * @argv: vectors
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	(void)argv;
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}

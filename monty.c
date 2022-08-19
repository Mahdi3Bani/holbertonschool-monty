#include "monty.h"
/**
 * main - monty program
 * @argc: argument counter
 * @argv: argument value
 * Return: success or failure
 */
int main(int argc, char **argv)
{

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		execute(argv[1]);
	}

	return (EXIT_SUCCESS);

}

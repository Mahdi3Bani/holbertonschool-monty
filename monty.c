#include "monty.h"
/**
 * main - monty program
 * @argc: argument counter
 * @argv: argument value
 * Return: success or failure
 */
int main(int argc, char **argv)
{
	FILE *fd;
	char line[500];
	stack_t *stack = NULL;
	int line_number;

	if (argc != 2)
	{
		return (usage_error()); /** print error*/
	}

	fd = fopen(argv[1], "r"); /** open file*/

	if (fd == NULL)
	{
		return (open_error(argv[1])); /** print error*/
	}

	/** run the monty byte */
	while (fgets(line, 500, fd))
	{
		execute(line,&stack, line_number);
		line_number ++;
	}

	/** close file */
	fclose(fd);
	return (EXIT_SUCCESS);

}

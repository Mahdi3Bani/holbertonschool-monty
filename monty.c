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
	int i;

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
		excute(line[i]);
		i++;
	}

	/** close file */
	fclose(fd);
	return (EXIT_SUCCESS);

}

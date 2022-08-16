#include "monty.h"
/**
* main - function monty program
Return : success or failure
*/
int main(int argc, char **argv)
{
	FILE *fd;
	char line[500];
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, 500, fd))
	{
		excute(line[i]);
		i++;
	}
	fclose(fd);
	return (EXIT_SUCCESS);

}

#include "monty.h"
/**
 * usage_error - function that print an usage error message
 * Return: FAILURE
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);

}

/**
 * open_error - function that print an open file error message
 *@file: file name
 * Return: FAILURE
 */
int open_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);

	return (EXIT_FAILURE);

}

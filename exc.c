#include "monty.h"
/**
 * execute_monty - function that execute the monty byte
 *
 */


void execute(char *line, stack_t **stack, int line_number)
{
	char **token;

	instruction_t instructions[] = {{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"sub", sub}, {"nop", nop}, {"pchar", pchar},
		{"div", divide}, {"mul", mul}, {"mod", mod}, {NULL, NULL}};
	instruction_t *inst = instructions;

	token = strtok (line, " \t\r\n");
	if (token)
	{
		while ((inst->opcode) && strcmp(inst->opcode, token[0]))
		inst++;
		if (inst->opcode)
		{
			inst->f(stack,token[1]);

		}
		else
		{
			fprintf(stderr, "L%lu: unknown instruction %s\n", line_number, token[0]);
			_free(*stack);
			exit(EXIT_FAILURE);
		}
	}
	



}
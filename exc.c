#include "monty.h"
int info;
/**
 * execute_monty - function that execute the monty byte
 *
 */


void execute(char *line, stack_t **stack, int line_number)
{
	char *token;

	instruction_t instructions[] = {{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"sub", sub}, {"nop", nop}, {"pchar", pchar},
		{"div", divide}, {"mul", mul}, {"mod", mod}, {NULL, NULL}};
	instruction_t *inst = instructions;

	token = strtok (line, " \t\r\n");
	if (check_push(token))
	{
		info = get_value(token);
	}
	else
	{

		while ((inst->opcode) && !strcmp(inst->opcode, token))
			inst++;
		if (inst->opcode)
		{
			inst->f(stack,get_token(inst->opcode, token));

		}
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number + 1, token);

			_free(*stack);
			exit(EXIT_FAILURE);
		}
	}

	free (token);
	_free(*stack);




}

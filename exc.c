#include "monty.h"
/**
 * execute_monty - function that execute the monty byte
 *
 */
void execute(char *l, stack_t **stack)
{
char *arr;
int i;
int j;
instruction_t instructions[] = {{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"sub", sub}, {"nop", nop}, {"pchar", pchar},
		{"div", divide}, {"mul", mul}, {"mod", mod}, {NULL, NULL}};
	instruction_t *instruct_p = instructions;
    
	i = 0;
	j = 0;
	arr = strtok(l, " ");
	

	while (arr)
	{
		
		while (instruct_p[i].opcode != 0)
	{
		if (strcmp(instruct_p->opcode, arr))
		{
			instruct_p[i].f(stack, j);
			
		}
		j++;
	}
}
}

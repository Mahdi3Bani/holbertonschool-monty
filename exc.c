#include "monty.h"
cmd_t cmd = {NULL, NULL};
/**
 * execute - function that execute the monty byte
 *
 */

void execute(char *argv)
{
	int c_line = 0, r = 0;
	size_t bufsize = 0;
	char *token = NULL, *val = NULL;
	stack_t *stack = NULL;

	cmd.fd = fopen(argv, "r");
	if (cmd.fd)
	{
		while (getline(&cmd.line, &bufsize, cmd.fd) != -1)
		{
			c_line++;
			token = strtok(cmd.line, " \n\t\r");
			if (token == NULL)
			{
				free(token);
				continue;
			}
			else if (*token == '#')
				continue;
			val = strtok(NULL, " \n\t\r");
			r = get_opc(&stack, token, val, c_line);
			if (r == 1)
				push_error(cmd.fd, cmd.line, stack, c_line);
			else if (r == -1)
				instr_error(cmd.fd, cmd.line, stack, token, c_line);
		}
		free(cmd.line);
		_free(stack);
		fclose(cmd.fd);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	}
}


/**
 * get_opc - function to handle the opcode
 * @stack: is a stack or queue
 * @arg: commande
 * @val: value
 * @line_number: is a line command
 */
int get_opc(stack_t **stack, char *arg, char *val, int line_number)
{
	int i = 0;

	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pall},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (!strcmp(arg, op[i].opcode))
		{
			if (!strcmp(arg, "push"))
			{
				if (_isdigit(val) == 1)
					value = atoi(val);
				else
					return (1);
			}
			op[i].f(stack, (unsigned int)line_number);
			break;
		}
		i++;
	}
	if (!op[i].opcode)
		return (-1);

	return (0);
}

/**
 * clean_stack - Free and close files
 * @stack: Stack
 */
void clean_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	fclose(cmd.fd);
	free(cmd.line);
}



#include "monty.h"
/**
 * execute_monty - function that execute the monty byte
 *
 */
int execute_monty(FILE *monty_file)
{
char *line = NULL;
size_t len = 0;
char **op_token;
unsigned int line_number = 0;
void (*op_func)(stack_t**, unsigned int);

	while (getline(&line, &len, monty_file) != -1)
	{
		line_number++;
		op_token = strtok(line, " \n\t\a\b");
		
		if (op_token == NULL)
		{
			/** return message error */
		}
		else if (op_token[0][0] == '#') /** if comment line*/
		{
			/** free all */
			continue;
		}

		/** get the function to run it it like get function of printf*/

		op_func = get_func(op_token[0]);

		if (op_func == NULL)
		{
			/**free all */
			break;
		}



	}

	/** free*/
/** return exit statuts*/
}

/**
 * get_func - function that get the option function to run it
 * @opcode: op code
 * Return: the function need it
 */
void (*get_func(char *opcode))(stack_t**, unsigned int)

{
	instruction_t op_func[] =  {
		{NULL, NULL}
	};
	int i;

	for (i = 0; op_func[i].opcode; i++)
	{
		if (strcmp(opcode, op_func[i].opcode) == 0)
			return (op_func[i].f);
	}

	return (NULL);

}

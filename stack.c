#include "monty.h"
/**
 * _free - free stack
 * @stack: stack
 */
void _free(stack_t *stack)
{
    
	stack_t *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}









stack_t *new_node(int info)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = info;

	return (new);
}
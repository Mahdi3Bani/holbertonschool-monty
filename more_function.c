#include "monty.h"
/**
 * nop - function
 * @stack: node of stack linked list
 * @line_number: the current line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * swap - function
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *val = *stack;
	int tmp = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	tmp = val->n;
	val->n = val->next->n;
	val->next->n = tmp;
}

/**
 * add - function
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	val = *stack;
	sum = val->n + val->next->n;
	val->next->n = sum;
	pop(stack, line_number);
}

void pchar(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}



void sub(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

void divide(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

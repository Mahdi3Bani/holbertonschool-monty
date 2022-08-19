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
 * swap - function that swaps the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *val;
	int tmp = 0;

	val = *stack;
	if (val == NULL || val->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
	tmp = val->n;
	val->n = val->next->n;
	val->next->n = tmp;
}
}

/**
 * add - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
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

/**
 * pchar - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * sub - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */


void sub(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}


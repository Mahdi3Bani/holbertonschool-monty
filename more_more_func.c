#include "monty.h"

/**
 * divide - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */

void divide(stack_t **stack, unsigned int line_number)
{
	

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: impssible to divide by 0\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = (*stack)->n;
	sum /= (*stack)->next->n;
	pop(stack, line_number);
	val->n = sum;
}
/**
 * mul - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */

void mul(stack_t **stack, unsigned int line_number)
{

	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = (*stack)->n;
	sum *= (*stack)->next->n;
	pop(stack, line_number);
	val->n = sum;
}

/**
 * mod - function that adds the top two elements of the stack.
 * @stack: node of linked list
 * @line_number: the line number
 */



void mod(stack_t **stack, unsigned int line_number)
{

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: impssible to divide by 0\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	stack_t *val = NULL;
	int sum = 0;

	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		clean_stack(stack);
		exit(EXIT_FAILURE);
	}
	val = (*stack)->next;
	sum = (*stack)->n;
	sum %= (*stack)->next->n;
	pop(stack, line_number);
	val->n = sum;
}

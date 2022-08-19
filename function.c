#include "monty.h"
int info;
/**
 * push - function tha push a value to a stack linked list
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new;

	if (!info)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	new = new_node(info);
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
	
	
}

/**
 * pall - function that print
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	
	stack_t *val;


	val = *stack;
	while (val)
	{
		printf("%d\n", val->n);
		val = val->next;
	}
	
(void)line_number;
}

/**
 * pint - function tha print
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, " err%u", line_number);

	}

	printf("%d\n", (*stack)->next->n);
}

/**
 * pop - function tha print
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, " err%u", line_number);

	}
	next = (*stack)->next->next;

	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}


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
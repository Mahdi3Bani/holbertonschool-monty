#include "monty.h"
/**
 * push - function tha push a value to a stack linked list
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *nodes;
char *val;
int i = 0, j = 0;

{

}
}

/**
 * pall - function that print
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *val = (*stack)->next;

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
		fprintf(stderr, " err", line_number);

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
		fprintf(stderr, " err", line_number);

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

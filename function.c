#include "monty.h"
int info;
/**
 * push - function tha push a value to a stack linked list
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *node;
(void)line_number;

	node = malloc(sizeof(stack_t));
	
	if (node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	node->n = info;
	node->prev = NULL;
	node->next = *stack;
	if (*stack == NULL)
	{
		*stack = node;
		return;
	}
	(*stack)->prev = node;
	*stack = node;

	_free(*stack);

	
	
}

/**
 * pall - function that print
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *val = *stack;

	while (val)
	{
		printf("%d\n", val->n);
		val = val->next;
	}
	

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
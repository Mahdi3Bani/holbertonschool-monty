#include "monty.h"
/**
 * swap - function
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *val;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "err", line_number);

	}

	val = (*stack)->next->next;
	(*stack)->next->next = val->next;
	(*stack)->next->prev = val;

	if (val->next)
		val->next->prev = (*stack)->next;
	val->next = (*stack)->next;
	val->prev = *stack;
	(*stack)->next = val;
}

/**
 * add - function
 * @stack: node of stack linked list
 * @line_number: the current line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "err", line_number);

	}

	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);

}


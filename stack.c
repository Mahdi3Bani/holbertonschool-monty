#include "monty.h"
/**
 * _free - free stack
 * @stack: stack
 */
void _free(stack_t *stack)
{
    stack_t *tmp;

    while (stack)
    {
        tmp = stack->next;
        free(stack);
        stack = tmp;
    }
}
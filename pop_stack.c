#include "monty.h"

/**
 * pop_stack - remove the top node of the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
stack_t *tmp_node;

if (*stack == NULL || stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}

tmp_node = *stack;
*stack = tmp_node->next;
if (*stack != NULL)
{
(*stack)->prev = NULL;
}

free(tmp_node);
}

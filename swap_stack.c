#include "monty.h"

/**
 * swap_stack - swaps the top two elements of the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void swap_stack(stack_t **stack, unsigned int line_number)
{
stack_t *tmp_node;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, "swap");
exit(EXIT_FAILURE);
}

tmp_node = (*stack)->next;
(*stack)->next = tmp_node->next;

if (tmp_node->next != NULL)
{
tmp_node->next->prev = *stack;
}

tmp_node->next = *stack;
(*stack)->prev = tmp_node;

tmp_node->prev = NULL;
*stack = tmp_node;
}

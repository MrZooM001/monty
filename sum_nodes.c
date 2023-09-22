#include "monty.h"

/**
 * sum_nodes - add values of the top two nodes in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void sum_nodes(stack_t **stack, unsigned int line_number)
{
int sum;

if (*stack == NULL || stack == NULL ||
(*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, "add");
exit(EXIT_FAILURE);
}
(*stack) = (*stack)->next;
sum = (*stack)->n + (*stack)->prev->n;
(*stack)->n = sum;
(*stack)->prev = NULL;
}

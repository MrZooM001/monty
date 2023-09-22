#include "monty.h"

/**
 * mul_nodes - multiply values of the top two nodes in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void mul_nodes(stack_t **stack, unsigned int line_number)
{
int mul;

if (*stack == NULL || stack == NULL ||
(*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, "mul");
exit(EXIT_FAILURE);
}

(*stack) = (*stack)->next;
mul = (*stack)->n * (*stack)->prev->n;
(*stack)->n = mul;
(*stack)->prev = NULL;
}

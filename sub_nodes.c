#include "monty.h"

/**
 * sub_nodes - subtract values of the top two nodes in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void sub_nodes(stack_t **stack, unsigned int line_number)
{
int sub;

if (*stack == NULL || stack == NULL ||
(*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, "sub");
exit(EXIT_FAILURE);
}
(*stack) = (*stack)->next;
sub = (*stack)->n - (*stack)->prev->n;
(*stack)->n = sub;
(*stack)->prev = NULL;
}

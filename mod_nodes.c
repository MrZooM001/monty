#include "monty.h"

/**
 * mod_nodes - get modulus of the top two nodes in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void mod_nodes(stack_t **stack, unsigned int line_number)
{
int div;

if (*stack == NULL || stack == NULL ||
(*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, "mod");
exit(EXIT_FAILURE);
}
if ((*stack)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
}

(*stack) = (*stack)->next;
div = (*stack)->n % (*stack)->prev->n;
(*stack)->n = div;
(*stack)->prev = NULL;
}

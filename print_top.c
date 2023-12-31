#include "monty.h"

/**
 * print_top - print the top node in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void print_top(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}

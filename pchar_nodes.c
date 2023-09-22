#include "monty.h"

/**
 * pchar_nodes - print as ascii values.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void pchar_nodes(stack_t **stack, unsigned int line_number)
{
int asci_char;

if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

asci_char = (*stack)->n;
if (asci_char < 0 || asci_char > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
printf("%c\n", asci_char);
}

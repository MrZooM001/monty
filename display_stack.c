#include "monty.h"

/**
 * display_stack - print all nodes in the stack.
 * @stack: pointer to the stack.
 * @line_number: line number.
 *
 * Return: void.
 */
void display_stack(stack_t **stack, unsigned int line_number)
{
stack_t *tmp_node;

(void) line_number;
if (stack == NULL)
{
exit(EXIT_FAILURE);
}

tmp_node = *stack;
while (tmp_node != NULL)
{
printf("%d\n", tmp_node->n);
tmp_node = tmp_node->next;
}
}

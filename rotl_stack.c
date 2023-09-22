#include "monty.h"

/**
 * rotl_stack - rotates the stack to the top.
 * @stack: pointer to the stack.
 * @line_num: line number.
 *
 * Return: void.
 */
void rotl_stack(stack_t **stack, __attribute__((unused))unsigned int line_num)
{
stack_t *tmp_node;

if (*stack == NULL || stack == NULL ||
(*stack)->next == NULL)
{
return;
}

tmp_node = *stack;
while (tmp_node->next != NULL)
{
tmp_node = tmp_node->next;
}

tmp_node->next = *stack;
(*stack)->prev = tmp_node;
*stack = (*stack)->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}

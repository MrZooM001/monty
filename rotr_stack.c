#include "monty.h"

/**
 * rotr_stack - rotates the stack to the bottom.
 * @stack: pointer to the stack.
 * @line_num: line number.
 *
 * Return: void.
 */
void rotr_stack(stack_t **stack, __attribute__((unused))unsigned int line_num)
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
tmp_node->prev->next = NULL;
tmp_node->prev = NULL;
(*stack)->prev = tmp_node;
(*stack) = tmp_node;
}

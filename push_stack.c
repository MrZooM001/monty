#include "monty.h"

/**
 * push_stack - push a new node to the top of the stack.
 * @new_node: pointer to the stack.
 * @ln: line number.
 *
 * Return: void.
 */
void push_stack(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
stack_t *tmp_node;

if (top == NULL)
{
top = *new_node;
return;
}

if (new_node == NULL)
exit(EXIT_FAILURE);

tmp_node = top;
top = *new_node;
top->next = tmp_node;
tmp_node->prev = top;
}

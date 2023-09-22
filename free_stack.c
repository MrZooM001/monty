#include "monty.h"

/**
 * free_stack - free allocated memory for the stack nodes.
 *
 * Return: void.
 */
void free_stack(void)
{
stack_t *tmp_node;

if (top == NULL)
return;

while (top != NULL)
{
tmp_node = top;
top = top->next;
free(tmp_node);
}
}

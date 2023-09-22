#include "monty.h"

/**
 * create_stack - execute the matched function with opcode.
 * @n: nemuric value for the first node in the stack.
 *
 * Return: new node of the new stack.
 */
stack_t *create_stack(int n)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

return (new_node);
}

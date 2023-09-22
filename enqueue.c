#include "monty.h"

/**
 * enqueue - add a new node to the queue.
 * @new_node: pointer to the new node.
 * @line_num: line number.
 *
 * Return: void.
 */
void enqueue(stack_t **new_node, __attribute__((unused)) unsigned int line_num)
{
stack_t *tmp_node;

if (top == NULL)
{
top = *new_node;
return;
}

if (new_node == NULL || *new_node == NULL)
{
exit(EXIT_FAILURE);
}

tmp_node = top;
while (tmp_node->next != NULL)
{
tmp_node = tmp_node->next;
}

tmp_node->next = *new_node;
(*new_node)->prev = tmp_node;
}

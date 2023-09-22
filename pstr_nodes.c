#include "monty.h"

/**
 * pstr_nodes - print as string.
 * @stack: pointer to the stack.
 * @line_num: line number.
 *
 * Return: void.
 */
void pstr_nodes(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
stack_t *tmp_node;
int asci_char;

if (*stack == NULL || stack == NULL)
{
return;
}
tmp_node = *stack;
while (tmp_node != NULL)
{
asci_char = tmp_node->n;
if (asci_char < 0 || asci_char > 127)
{
break;
}
printf("%c", asci_char);
if (asci_char == '\0')
{
break;
}
tmp_node = tmp_node->next;
}
printf("\n");
}

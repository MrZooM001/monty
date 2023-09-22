#include "monty.h"

/**
 * lookup_func - execute the matched function with opcode.
 * @opc_func: opcode as one line (befor tokenize).
 * @opcode: tokenized opcode.
 * @value: numeric value as argument.
 * @ln_num: line number.
 * @sq_flag: 0 if stack, 1 if queue.
 *
 * Return: void.
 */
void lookup_func(opcode_func opc_func, char *opcode,
char *value, int ln_num, int sq_flag)
{
stack_t *new_node;
int i, opcode_flag;

opcode_flag = 1;
if (strcmp(opcode, "push") == 0)
{
if (value != NULL && value[0] == '-')
{
value = value + 1;
opcode_flag = -1;
}
if (value == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", ln_num);
exit(EXIT_FAILURE);
}
i = 0;
while (value[i] != '\0')
{
if (isdigit(value[i] == 0))
{
fprintf(stderr, "L%d: usage: push integer\n", ln_num);
exit(EXIT_FAILURE);
}
i++;
}
new_node = create_stack(atoi(value) * opcode_flag);
if (sq_flag == 0)
{
opc_func(&new_node, ln_num);
}
if (sq_flag == 1)
{
enqueue(&new_node, ln_num);
}
}
else
opc_func(&new_node, ln_num);
}

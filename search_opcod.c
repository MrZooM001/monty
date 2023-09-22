#include "monty.h"

/**
 * search_opcode - search for matched function with opcode.
 * @token: tokenized opcode.
 * @value: argument of opcode.
 * @line: line number.
 * @sq_flag: 0 if stack, 1 if queue.
 *
 * Return: void.
 */
void search_opcode(char *token, char *value, int line, int sq_flag)
{
int i, opcode_flag;

instruction_t opcodes[] = {
{"push", push_stack},
{"pall", display_stack},
{"pint", print_top},
{"pop", pop_stack},
{"swap", swap_stack},
{"add", sum_nodes},
{"nop", nop_stack},
{"sub", sub_nodes},
{"div", div_nodes},
{"mul", mul_nodes},
{"mod", mod_nodes},
{"pchar", pchar_nodes},
{"pstr", pstr_nodes},
{"rotl", rotl_stack},
{"rotr", rotr_stack},
{NULL, NULL}};

if (token[0] == '#')
return;

for (i = 0, opcode_flag = 1; opcodes[i].opcode != NULL; i++)
{
if (strcmp(token, opcodes[i].opcode) == 0)
{
lookup_func(opcodes[i].f, token, value, line, sq_flag);
opcode_flag = 0;
}
}
if (opcode_flag == 1)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line, token);
exit(EXIT_FAILURE);
}
}

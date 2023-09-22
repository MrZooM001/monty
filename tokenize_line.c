#include "monty.h"

/**
 * tokenize_line - Tokenize the input to smaller strings (tokens).
 * @input: opcode as one line (befor tokenize).
 * @ln_num: line number.
 * @sq_flag: 0 for stack, 1 for queue.
 *
 * Return:  0 if stack, 1 if queue.
 */
int tokenize_line(char *input, int ln_num, int sq_flag)
{
char *token, *value;
const char *delim;

delim = "\n ";
if (input == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

token = strtok(input, delim);
if (token == NULL)
return (sq_flag);
value = strtok(NULL, delim);

if (strcmp(token, "stack") == 0)
return (0);
if (strcmp(token, "queue") == 0)
return (1);

search_opcode(token, value, ln_num, sq_flag);
return (sq_flag);
}

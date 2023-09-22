#include "monty.h"
stack_t *top = NULL;

/**
 * main - Start point of the program.
 * @argc: arguments Count.
 * @argv: array of arguments.
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
FILE *file_stream;
char *file_name, *input = NULL;
int line_number, sq_flag = 0;
size_t len = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
else
{
file_name = argv[1];
file_stream = fopen(file_name, "r");
if (file_name == NULL || file_stream == NULL)
{
fprintf(stderr, "Error: Can't open file <%s>\n", file_name);
exit(EXIT_FAILURE);
}

for (line_number = 1; getline(&input, &len, file_stream) != -1; line_number++)
{
sq_flag = tokenize_line(input, line_number, sq_flag);
}
free(input);

fclose(file_stream);
}

free_stack();

return (0);
}

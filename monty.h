#ifndef _MONTY_H_
#define _MONTY_H_

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

extern stack_t *top;
typedef void (*opcode_func)(stack_t **, unsigned int);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int ln_num);
} instruction_t;

stack_t *create_stack(int n);
void enqueue(stack_t **new_node, __attribute__((unused)) unsigned int ln_num);
void free_stack(void);

int tokenize_line(char *input, int line, int sq_flag);
void search_opcode(char *token, char *value, int line, int sq_flag);
void lookup_func(opcode_func opc_func, char *opcode,
char *value, int ln_num, int sq_flag);

void push_stack(stack_t **new_node, __attribute__((unused))unsigned int ln);
void pop_stack(stack_t **stack, unsigned int ln_num);
void display_stack(stack_t **stack, unsigned int ln_num);
void print_top(stack_t **stack, unsigned int ln_num);
void swap_stack(stack_t **stack, unsigned int ln_num);

void div_nodes(stack_t **stack, unsigned int ln_num);
void mod_nodes(stack_t **stack, unsigned int ln_num);
void mul_nodes(stack_t **stack, unsigned int ln_num);
void sum_nodes(stack_t **stack, unsigned int ln_num);
void sub_nodes(stack_t **stack, unsigned int ln_num);

void nop_stack(stack_t **stack, unsigned int ln_num);

void pchar_nodes(stack_t **stack, unsigned int ln_num);
void pstr_nodes(stack_t **stack, __attribute__((unused)) unsigned int ln_num);

void rotl_stack(stack_t **stack, __attribute__((unused)) unsigned int ln_num);
void rotr_stack(stack_t **stack, __attribute__((unused)) unsigned int ln_num);

#endif

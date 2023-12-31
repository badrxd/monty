#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct glob_v - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct glob
{
	FILE *file;
	char *srt_line;
	char *value;
	int lifi;
}  glob_v;
extern glob_v var;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void f_push(stack_t **head, unsigned int line_number);
void f_pall(stack_t **head, unsigned int line_number);
void pint_f(stack_t **head, unsigned int counter);
void pop_f(stack_t **head, unsigned int counter);
void swap_f(stack_t **head, unsigned int counter);
void add_f(stack_t **head, unsigned int counter);
void nop_f(stack_t **head, unsigned int counter);
void sub_f(stack_t **head, unsigned int counter);
void div_f(stack_t **head, unsigned int counter);
void mul_f(stack_t **head, unsigned int counter);
void mod_f(stack_t **head, unsigned int counter);
void pchar_f(stack_t **head, unsigned int counter);
void pstr_f(stack_t **head, unsigned int counter);
void rotl_f(stack_t **head,  __attribute__((unused)) unsigned int counter);
void rotr_f(stack_t **head, __attribute__((unused)) unsigned int counter);
void stack_f(stack_t **head, unsigned int counter);



int run_code(char *content, stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
#endif

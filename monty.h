#ifndef MONTY_FILEi
#define MONTY_FILE

/* all static library */
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

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
        void (*f)(stack_t **stack, unsigned int counter);
} instruction_t;

/*  */
typedef struct glob
{
	char *string;
	FILE *file;
	unsigned int counter;
	int ops_arg;
}  glob_v;

extern glob_v var;
/**
extern int ops_arg;
extern FILE *file ;
extern unsigned int counter;
extern char *string;*/

/* all functions*/
int run_code(char *string, stack_t **stack_t, unsigned int counter); 
void push_f(stack_t **stack, unsigned int counter);
void pall_f(stack_t **stack, unsigned int counter);
void free_stack(stack_t **stack);


#endif /*MONTY_FILE*/

#ifndef __MONTY_H__
#define __MONTY_H__
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <unistd.h>
#include <string.h>

#define UNUSED(x) (void)(x)
=======

>>>>>>> f59dadd5b099ac731fce50896d264a7be825c0d0
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
<<<<<<< HEAD

int valid_instruction(char *instruction, char *operands[10]);
char *_strcpy(char *s);
int _strcmp(char *s1, char *s2);
void _push(stack_t **head, int push_parameter, int line_number);
int push_argument(char *line_cp, int line_number);
void _pall(stack_t **head, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
=======
extern int line_number;
void valid_instruction(char *buffer, int push_arg);
void _pall(stack_t **head, unsigned int line_number);
void _push(stack_t **head, int push_arg, int line_number);
>>>>>>> f59dadd5b099ac731fce50896d264a7be825c0d0
#endif

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
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
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
typedef struct globals
{
int lifo;
unsigned int cont;
char  *arg;
stack_t *head;
FILE *fd;
char *buffer;
} global_t;

extern global_t vglo;

void _push(stack_t **double, unsigned int line);
void _pall(stack_t **double, unsigned int line);
void _pint(stack_t **double, unsigned int line);
void _pop(stack_t **double, unsigned int line);
void _swap(stack_t **double, unsigned int line);
void _queue(stack_t **double, unsigned int line);
void _stack(stack_t **double, unsigned int line);
void _add(stack_t **double, unsigned int line);
void _nop(stack_t **double, unsigned int line);
void _sub(stack_t **double, unsigned int line);
void _div(stack_t **double, unsigned int line);
void _mul(stack_t **double, unsigned int line);
void _mod(stack_t **double, unsigned int line);
void _pchar(stack_t **double, unsigned int line);
void _pstr(stack_t **double, unsigned int line);
void _rotl(stack_t **double, unsigned int line);
void _rotr(stack_t **double, unsigned int line);

void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number);

int _sch(char *s, char c);
char *_strtoky(char *s, char *d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *s1, char *s2);

stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);

void free_vglo(void);

#endif

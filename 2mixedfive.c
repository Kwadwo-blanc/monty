#include "monty.h"

/**
 * _queue - sets the format of the data to a queue (FIFO)
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _queue(stack_t **double, unsigned int line)
{
(void)double;
(void)line;

vglo.lifo = 0;
}

/**
 * _stack - sets the format fo the data to a stack (LIFO)
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _stack(stack_t **double, unsigned int line)
{
(void)double;
(void)line;

vglo.lifo = 1;
}

/**
 * _add - adds the top two elements of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _add(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;

ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't add, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = (*double)->next;
ent->n += (*double)->n;
_pop(double, line);
}

/**
 * _nop - doesn't do anythinhg
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _nop(stack_t **double, unsigned int line)
{
(void)double;
(void)line;
}

/**
 * _sub - subtracts the top element to the second top element of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _sub(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;

ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't sub, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = (*double)->next;
ent->n -= (*double)->n;
_pop(double, line);
}

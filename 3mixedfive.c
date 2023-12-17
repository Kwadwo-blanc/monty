#include "monty.h"

/**
 * _div - divides the second element by the top element of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _div(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;
ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't div, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

if ((*double)->n == 0)
{
dprintf(2, "L%u: division by zero\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = (*double)->next;
ent->n /= (*double)->n;
_pop(double, line);
}

/**
 * _mul - multiplies the top element to the second top element of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _mul(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;
ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't mul, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = (*double)->next;
ent->n *= (*double)->n;
_pop(double, line);
}

/**
 * _mod - computes the rest of the division of the second element
 * by the top element of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _mod(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;
ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't mod, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

if ((*double)->n == 0)
{
dprintf(2, "L%u: division by zero\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = (*double)->next;
ent->n %= (*double)->n;
_pop(doubly, line);
}
/**
 * _pchar - print the char value of the first element
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _pchar(stack_t **double, unsigned int line)
{
if (double == NULL || *double == NULL)
{
dprintf(2, "L%u: can't pchar, stack empty\n", line);
free_vglo();
exit(EXIT_FAILURE);
}
if ((*double)->n < 0 || (*double)->n >= 128)
{
dprintf(2, "L%u: can't pchar, value out of range\n", line);
free_vglo();
exit(EXIT_FAILURE);
}
printf("%c\n", (*double)->n);
}

/**
 * _pstr - prints the string of the stack
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _pstr(stack_t **double, unsigned int line)
{
stack_t *ent;
(void)line;

ent = *double;

while (ent && ent->n > 0 && ent->n < 128)
{
printf("%c", ent->n);
ent = ent->next;
}

printf("\n");
}

#include "monty.h"

/**
 * _push - pushes an element to the stack
 *
 * @double: head of the linked list
 * @line: line number
 * Return: no return
 */
void _push(stack_t **double, unsigned int line)
{
int n, j;

if (!vglo.arg)
{
dprintf(2, "L%u: ", line);
dprintf(2, "usage: push integer\n");
free_vglo();
exit(EXIT_FAILURE);
}

for (j = 0; vglo.arg[j] != '\0'; j++)
{
if (!isdigit(vglo.arg[j]) && vglo.arg[j] != '-')
{
dprintf(2, "L%u: ", cline);
dprintf(2, "usage: push integer\n");
free_vglo();
exit(EXIT_FAILURE);
}
}
n = atoi(vglo.arg);
if (vglo.lifo == 1)
add_dnodeint(double, n);
else
add_dnodeint_end(double, n);
}

/**
 * _pall - prints all values on the stack
 *
 * @double: head of the linked list
 * @line: line numbers
 * Return: no return
 */
void _pall(stack_t **double, unsigned int line)
{
stack_t *ent;
(void)line;

ent = *double;

while (ent)
{
printf("%d\n", ent->n);
ent = ent->next;
}
}

/**
 * _pint - prints the value at the top of the stack
 *
 *  @double: head of the linked list
 *  @line: line number
 *  Return: no return
 */
void _pint(stack_t **double, unsigned int line)
{
(void)line;

if (*double == NULL)
{
dprintf(2, "L%u: ", line);
dprintf(2, "can't pint, stack empty\n");
free_vglo();
exit(EXIT_FAILURE);
}
printf("%d\n", (*double)->n);
}

/**
 * _pop - removes the top element of the stack
 *
 * @double: head of the linked list
 * @line: line number
 * Return: no return
 */
void _pop(stack_t **double, unsigned int line)
{
stack_t *ent;

if (double == NULL || *double == NULL)
{
dprintf(2, "L%u: can't pop an empty stack\n", line);
free_vglo();
exit(EXIT_FAILURE);
}
ent = *double;
*double = (*double)->next;
free(ent);
}

/**
 * _swap - swaps the top two elements of the stack
 *
 * @double: head of the linked list
 * @line: line number
 * Return: no return
 */
void _swap(stack_t **double, unsigned int line)
{
int m;
stack_t *ent = NULL;
m = 0;

ent = *double;

for (; ent != NULL; ent = ent->next, m++)
;

if (m < 2)
{
dprintf(2, "L%u: can't swap, stack too short\n", line);
free_vglo();
exit(EXIT_FAILURE);
}

ent = *double;
*double = (*double)->next;
ent->next = (*double)->next;
ent->prev = *double;
(*double)->next = ent;
(*double)->prev = NULL;
}

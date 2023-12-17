#include "monty.h"

/**
 * _rotl - rotates the first element to the bottom & the second to the top
 *
 * @double: head of the linked list
 * @line: line number;
 * Return: no return
 */
void _rotl(stack_t **double, unsigned int line)
{
stack_t *ent1 = NULL;
stack_t *ent2 = NULL;
(void)line;

if (*double == NULL)
return;

if ((*double)->next == NULL)
return;
ent1 = (*double)->next;
ent2 = *double;
for (; ent2->next != NULL; ent2 = ent2->next)
;

ent1->prev = NULL;
ent2->next = *double;
(*double)->next = NULL;
(*double)->prev = ent2;
*double = ent1;
}

/**
 * _rotr - reverse the stack
 *
 * @double: head of the linked list
 * @line: line number
 * Return: no return
 */
void _rotr(stack_t **double, unsigned int line)
{
stack_t *ent = NULL;
(void)line;

if (*double == NULL)
return;

if ((*double)->next == NULL)
return;

ent = *double;

for (; ent->next != NULL; ent = ent->next)
;

ent->prev->next = NULL;
ent->next = *double;
ent->prev = NULL;
(*double)->prev = ent;
*double = ent;
}

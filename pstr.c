#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *t;
(void)counter;

t = *head;
while (t)
{
if (t->n > 127 || t->n <= 0)
{
break;
}
printf("%c", t->n);
t = t->next;
}
printf("\n");
}

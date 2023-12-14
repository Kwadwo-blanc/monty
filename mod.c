#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no
*/
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *t;
int len, ent;
len = 0;

t = *head;
while (t)
{
t = t->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
t = *head;
if (t->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
ent = t->next->n % t->n;
t->next->n = ent;
*head = t->next;
free(t);
}

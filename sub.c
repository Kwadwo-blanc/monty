#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *ent;
int sul, nodes;

ent = *head;
for (nodes = 0; ent != NULL; nodes++)
ent = ent->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
ent = *head;
sul = ent->next->n - ent->n;
ent->next->n = sul;
*head = ent->next;
free(ent);
}

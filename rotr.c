#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *cut;
cut = *head;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (cut->next)
{
cut = cut->next;
}
cut->next = *head;
cut->prev->next = NULL;
cut->prev = NULL;
(*head)->prev = cut;
(*head) = cut;
}

#include "monty.h"

/**
 * pall - Function to print all values on the stack
 * @stack: Pointer to the stack
 */
void pall(const MontyStack *stack)
{
const MontyStack *current = stack;

while (current != NULL)
{
printf("%d\n", current->data);
current = current->next;
}
}

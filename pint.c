#include "monty.h"

/**
 * pint - Function to print the value at the top of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 */
void pint(const MontyStack *stack, unsigned int line_number)
{
if (stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

printf("%d\n", stack->data);
}

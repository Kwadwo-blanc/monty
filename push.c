#include "monty.h"

/**
 * push - Function to push an element onto the stack
 * @stack: Double pointer to the stack
 * @value: Integer value to be pushed onto the stack
 * @line_number: Line number in the file
 *
 * Return: 0 on success, exits with EXIT_FAILURE on failure
 */
int push(MontyStack **stack, int value, unsigned int line_number)
{
UNUSED(line_number);

MontyStack *new_node;
new_node = malloc(sizeof(MontyStack));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->data = value;
new_node->next = *stack;
*stack = new_node;

return (0);
}

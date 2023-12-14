#include "monty.h"

/**
 * main - Sample usage of the push and pall opcodes
 *
 * Return: Always 0
 */
int main(void)
{
MontyStack *stack = NULL;

push(&stack, 10, 1);
push(&stack, 20, 2);
push(&stack, 30, 3);

pall(stack);
pint(stack, 4);

return (0);
}

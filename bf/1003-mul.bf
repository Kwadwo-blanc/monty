#include <stdio.h>

/**
 * main - Reads two digits, multiplies them, and prints the result with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2;

printf("Enter the first digit (0-9): ");
scanf("%d", &digit1);

printf("Enter the second digit (0-9): ");
scanf("%d", &digit2);

if (digit1 < 0 || digit1 > 9 || digit2 < 0 || digit2 > 9)
{
printf("Invalid input. Digits should be between 0 and 9.\n");
return (1);
}

int product = digit1 * digit2;

printf("The product of %d and %d is: %d\n", digit1, digit2, product);

return (0);
}

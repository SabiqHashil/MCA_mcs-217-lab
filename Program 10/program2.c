// PROGRAM-2

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int a, b, result;
    char operation;

    // Input validation
    printf("Enter first number: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Error: Invalid input for the first number\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
    {
        printf("Error: Invalid operator\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &b) != 1)
    {
        printf("Error: Invalid input for the second number\n");
        return 1;
    }

    // Check for division by zero
    if (operation == '/' && b == 0)
    {
        printf("Error: Division by zero\n");
        return 1;
    }

    switch (operation)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Error: Invalid operator\n");
        return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
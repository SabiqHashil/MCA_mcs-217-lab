
// 10.  Write a Program that is correct but still not reliable. Justify your answer. Make
// necessary assumptions.

// PROGRAM -1

#include <stdio.h>
int main()
{
    int a, b, result;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (operation == '+')
    {
        result = a + b;
    }
    else if (operation == '-')
    {
        result = a - b;
    }
    else if (operation == '*')
    {
        result = a * b;
    }
    else if (operation == '/')
    {
        result = a / b;
    }
    else
    {
        printf("Error: Invalid operator\n");
        return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
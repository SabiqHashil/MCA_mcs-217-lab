// 12. Select a small portion of any program written by you. Check if the portion of code
// selected by you is having constructs that violate the structured programming paradigm. If
// yes, then rewrite the code to conform to structured programming paradigm. If no, check
// another portion of code.

// PROGRAM-1 Factorial of Given Number

#include <stdio.h>
int main()
{
    int num, i = 1;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        goto end;
    }
loop:
    factorial *= i;
    i++;
    if (i <= num)
        goto loop;
    printf("Factorial of %d = %llu\n", num, factorial);
end:
    return 0;
}
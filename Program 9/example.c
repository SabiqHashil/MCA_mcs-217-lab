// 9. Write a Program that is correct but of not good quality. Justify your answer. Make
// necessary assumptions.

// Example , Program to find the sum of Array;

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Assume array of fixed size
    int s = 0;
    for (int i = 0; i < 10; i++)
        s += a[i];
    printf("%d\n", s);
    return 0;
}
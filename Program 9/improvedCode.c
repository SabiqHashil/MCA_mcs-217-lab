

// Improved Version of the Program

#include <stdio.h>

// Function to calculate the sum of an array
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraySize = sizeof(array) / sizeof(array[0]);

    // Calculate the sum of the array
    int sum = calculateSum(array, arraySize);

    // Print the result
    printf("Sum of the array: %d\n", sum);

    return 0;
}
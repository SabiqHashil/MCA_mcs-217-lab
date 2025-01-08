// 5. Write a program in ‘C’ language for the multiplication of two matrices

#include <stdio.h>
void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    // Initializing all elements of resultMatrix to 0
    for (int i = 0; i < rowFirst; ++i)
    {
        for (int j = 0; j < columnSecond; ++j)
        {
            resultMatrix[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in resultMatrix
    for (int i = 0; i < rowFirst; ++i)
    {
        for (int j = 0; j < columnSecond; ++j)
        {
            for (int k = 0; k < columnFirst; ++k)
            {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void printMatrix(int matrix[3][3], int row, int column)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d ", matrix[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main()
{
    int firstMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int secondMatrix[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    int resultMatrix[3][3]; // Matrix to store the result

    // Dimensions of the matrices
    int rowFirst = 3, columnFirst = 3, rowSecond = 3, columnSecond = 3;

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, columnFirst, rowSecond,
                     columnSecond);

    // Display the result
    printf("Resultant Matrix:\n");
    printMatrix(resultMatrix, rowFirst, columnSecond);
    return 0;
}